// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<vector<pair<int,int>>> adj(V);
        for(auto it: edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        
        vector<int> dist(V,INT_MAX);
        dist[src]=0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,src});
        while(!pq.empty()){
            int dis= pq.top().first;
            int node= pq.top().second;
            pq.pop();
            
            for(auto it: adj[node]){
                int adjN= it.first;
                int edW= it.second;
                if(dis+edW < dist[adjN]){
                    dist[adjN]= dis+edW;
                    pq.push({dist[adjN],adjN});
                }
            }
        }
        return dist;
    }
};
// TC: O(ElogV + V), SC: O(E+V)
// https://youtu.be/V6H1qAeB-l4