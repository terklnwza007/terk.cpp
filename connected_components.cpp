#include <iostream>
#include <vector>
using namespace std;
void DFS(int node, vector<vector<int>> &adjlist, vector<bool> &check)
{
    check[node] = true;
    for (int i = 0; i < adjlist[node].size(); i++)
    {
        int parent = adjlist[node][i];
        if (!check[parent])
            DFS(parent, adjlist, check);
    }
}

int countcomponent(int n, vector<vector<int>> &adjList)
{

    vector<bool> check(n, false);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (check[i] == false)
        {
            DFS(i, adjList, check);
            count++;
        }
    }

    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjList(n);

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adjList[u - 1].push_back(v-1);
        adjList[v - 1].push_back(u-1);
    }
    
    cout << countcomponent(n, adjList);
    
}