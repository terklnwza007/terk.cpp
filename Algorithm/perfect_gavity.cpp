#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

const int INF = 10000;

int main(){
    int n;
    int round =0;
    
    int node_u , node_v;
    int total_node , connect , start;
    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> n;
    vector<vector<int>> record (n);
    
    for(int i=0 ; i< n; i++){
        
        cin >> total_node >> connect >> start;
        stack<int> s;
        vector<vector<int>> adj(total_node);
        int cost[total_node][total_node];
        vector<int> distance (total_node,INF);
        vector<bool> passed(total_node,false);
        
        
        int u , v , cost_value;
        for(int l=0 ;l < connect; l++){
            
            cin >> u >> v >> cost_value;
            adj[u].push_back(v);
            adj[v].push_back(u);
            cost[u][v] = cost_value;
            cost[v][u] = cost_value;
            

        }
        s.push(start);     
        passed[start] = true;    distance[start] = 0;
        
        node_u = node_v = 0;
        int min_distance = INF;
        for(int l=0; l<total_node-1; l++){
            stack<int> k=s;
            min_distance = INF;
            //cout << "min_distance : "<<min_distance << endl;
            while(!k.empty()){
                u = k.top();
                
                //cout << "current : " << u << endl; 
                k.pop();
                int r_round = adj[u].size();
                for(int r = 0 ;r < r_round; r++){
                    v = adj[u][r];
                    
                    //cout  <<"u = " <<  u << "  |  v = " << v  << endl <<"     " <<distance[u] << " - " << distance[u]+cost[u][v] << endl <<endl;
                    //! กรณีที่ เส้นทางใหม่ มี distance ที่น้อยว่าของเดิม เพื่อเก็บค่า distance ที่น้อยที่สุดของเเต่ละตัว 
                    if(distance[u] + cost[u][v] < min_distance && !passed[v] && passed[u]){
                        node_u = u;
                        node_v = v;
                        min_distance = distance[u] + cost[u][v];
                        //cout << "u : " << node_u<<" " << " | v : " << node_v << " | distance : " << min_distance<<endl;
                    }
                }
            }
            if(passed[node_u] && !passed[node_v]){
                
                s.push(node_v);
                
                passed[node_v] = true;
                distance[node_v] = distance[node_u] + cost[node_u][node_v];
            }
        }

        
        
        int max = s.top();
        while (!s.empty())
        {
            if (distance[s.top()] == distance[max])
            { 
                pq.push(s.top());
                s.pop();
            }
            else
            {
                break;
            }
        }
        while (!pq.empty())
        {
            record[round].push_back(pq.top());
            pq.pop();
        }
        round++;
    }
    for (int i = 0; i < n; i++)
    {
        for (auto it : record[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}