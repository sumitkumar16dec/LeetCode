class Solution {
  public:
    void recursion(int node, int vis[], vector<int>& ans, vector<vector<int>>& adj){
        ans.push_back(node);
        vis[node]= 1;
        
        for(int i: adj[node]){
            if(vis[i]==0) recursion(i, vis, ans, adj);
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> ans;
        int n= adj.size();
        int vis[n]= {0};
        recursion(0, vis, ans, adj);
        return ans;
    }
};
// TC: O(v+e), SC: O(v)
// editorial video