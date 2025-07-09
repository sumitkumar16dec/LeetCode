class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
        }
        
        vector<int> topo;
        queue<int> q;
        int indegree[V] = {0};
        for(int i=0;i<V;i++){
            for(int it: adj[i]){
                indegree[it]++;
            }
        }
        for(int i=0;i<V;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node= q.front(); q.pop();
            topo.push_back(node);
            
            for(int i: adj[node]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
        
        return topo;
    }
};
// TC: O(v+e), SC: O(2v)
// https://youtu.be/73sneFXuTEg