#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int size= 100000;

vector<int> adj[size];
vector<int> color(size , -1);

bool isBipartite(int n) {
    queue<int> q;
    for (int i = 0; i <= n; ++i) {
        if (color[i] == -1) {
            q.push(i);
            color[i] = 0;

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : adj[u]) {
                    if (color[v] == -1) {
                        color[v] = 1 - color[u];
                        q.push(v);
                    } else if (color[v] == color[u]) {
                        return false; 
                    }
                }
            }
        }
    }

    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }

    if (isBipartite(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
