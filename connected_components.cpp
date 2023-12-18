#include <iostream>
#include <vector>
using namespace std;

int size;
int count = 0;

void add_adj(vector<vector<int>> &adj, int u, int v)
{
    adj[u - 1].push_back(v - 1);
    adj[v - 1].push_back(u - 1);
}

void dfs(vector<bool> &check, int i, vector<vector<int>> &adj)
{
    check[i] = true;
    for (int it : adj[i])
    {
        if (!check[it])
            dfs(check, it, adj);
    }
}

void connected_component(vector<vector<int>> &adj)
{
    vector<bool> check(size, false);
    for (int i = 0; i < size; ++i)
    {
        if (!check[i])
        {
            dfs(check, i, adj);
            count++;
        }
    }
}

int main()
{
    int line;
    cin >> size >> line;
    int u, v;
    vector<vector<int>> adj(10000);
    for (int i = 0; i < line; ++i)
    {
        cin >> u >> v;
        add_adj(adj, u, v);
    }
    connected_component(adj);
    cout << count;
}