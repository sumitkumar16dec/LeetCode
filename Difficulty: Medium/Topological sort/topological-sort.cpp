class Solution {
  public:
    void dfs(int node, stack<int> &s, int vis[], vector<vector<int>> &adj){
        vis[node] = 1;
        
        for(int i: adj[node]){
            if(!vis[i]) dfs(i, s, vis, adj);
        }
        s.push(node);
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
        }
        
        vector<int> ans;
        stack<int> s;
        int vis[V]= {0};
        for(int i=0;i<V;i++){
            if(!vis[i]) dfs(i, s, vis, adj);
        }
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};
// TC: O(v+e), SC: O(2n)
// https://youtu.be/5lZ0iJMrUMk