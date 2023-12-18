#include <iostream>
#include <vector>
#include <queue>
using namespace std;





bool isBipartite(int n , vector<vector<int>>adj) {
    vector<int> color(n + 1, -1);
    queue<int> q;
    for (int i : adj[n]) {
        if (color[i] == -1) {
            q.push(i);
            color[i] = 0;

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v =0; v<adj[i].size();v++){
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
    vector<vector<int>> adj;
    
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (isBipartite(n,adj)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
