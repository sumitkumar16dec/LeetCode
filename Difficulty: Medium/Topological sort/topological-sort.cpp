class Solution {
  public:
    void dfs(int node, stack<int> &st, int vis[], vector<vector<int>> &adj){
        vis[node] = 1;
        for(int i: adj[node]){
            if(!vis[i]) dfs(i, st, vis, adj);
        }
        st.push(node);
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
        }
        
        vector<int> ans;
        stack<int> st;
        int vis[V]= {0};
        for(int i=0;i<V;i++){
            if(!vis[i]) dfs(i, st, vis, adj);
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
// TC: O(v+e), SC: O(2v)
// https://youtu.be/5lZ0iJMrUMk