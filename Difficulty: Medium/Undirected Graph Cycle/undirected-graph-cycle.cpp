class Solution {
  private:
    bool detect(int start, int vis[], vector<vector<int>>& adj){
        vis[start]=1;
        queue<pair<int,int>> q;
        q.push({start,-1});
        while(!q.empty()){
            int node= q.front().first;
            int parent= q.front().second;
            q.pop();
            
            for(int adjNode: adj[node]){
                if(vis[adjNode]==0){
                    q.push({adjNode, node});
                    vis[adjNode]=1;
                }
                else if(adjNode!=parent) return true;
            }
        }
        return false;
    }
  
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        int vis[V]= {0};
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(detect(i, vis, adj)) return true;
            }
        }
        return false;
    }
};
// TC: O(2n+2e), SC: O(2n)
// https://youtu.be/BPlrALf1LDU