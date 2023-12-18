#include <iostream>
#include <vector>

using namespace std;
int count=0;
int total_node;
void DFS( vector<vector<int>> &adj,int n, vector<bool> &check){
    check[n] = true;
    for(int i=0;i<adj[n].size();i++){
        int parent = adj[n][i];
        if(!check[parent]) DFS(adj , parent , check);
        
    }
}

void count_graph(vector<vector<int>> &adj){
    vector<bool> check(total_node , false);
    for(int i =0; i<total_node;++i){
        if(!check[i]){
            DFS(adj , i , check);
            count++;
        }
    }
    

}


int main() {
    
    int line;
    int u, v;
    cin >> total_node >> line;
    vector<vector<int>> adj(total_node);
    for (int i = 0; i < line; i++) {
        cin >> u >> v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }

    cout << "total_node =" << total_node << " line=" << line << endl;

    for (int i = 0; i < total_node; ++i) {
        cout << "Adj_list " << i+1 << ": ";
        for (auto it : adj[i]) {
            cout << it+1 << " ";
        }
        cout << endl;
    }
    count_graph(adj);
    cout << "Count_Graph : " << count;
    return 0;
}
