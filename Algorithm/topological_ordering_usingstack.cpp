#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void make_adj_list(vector<vector<int>> &adj, vector<int> &count)
{
    int tmp_a, tmp_b;
    cin >> tmp_a >> tmp_b;
    adj[tmp_a - 1].push_back(tmp_b - 1);
    count[tmp_b - 1]++;
}

void print_adj(vector<vector<int>> &adj)
{
    cout << "adj to node" << endl;
    for (int i = 0; i < adj.size(); i++)
    {
        cout << "adj " << i + 1 << " : ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] + 1 << " ";
        }
        cout << endl;
    }
}

void print_count(vector<int> &count) {
    for (auto it : count) {
        cout << it << endl;
    }
}

bool topologicalOrder(vector<vector<int>> &adj, vector<int> &count, vector<int> &order)
{
    int n = adj.size();
    stack<int> q;

    for (int i = 0; i < n; i++)
    {
        if (count[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int current = q.top();
        q.pop();

        order.push_back(current);

        for (auto it : adj[current])
        {
            count[it]--;
            if (count[it] == 0)
            {
                q.push(it);
            }
        }
    }
    if (order.size() == n)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int n, connect;
    cin >> n >> connect;
    vector<vector<int>> adj(n);
    vector<int> count(n, 0);

    for (int i = 0; i < connect; i++)
    {
        make_adj_list(adj, count);
    }
    //print_adj(adj);
    //print_count(count);
    vector<int> order;
    if (!topologicalOrder(adj, count, order))
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << order[i] + 1 << " ";
        }
    }

    return 0;
}
