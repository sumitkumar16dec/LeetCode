class Solution {
  public:
    void func(int node, int vis[], vector<vector<int>>& adj, vector<int> &ans){
        ans.push_back(node);
        vis[node]=1;
        for(int i: adj[node]){
            if(!vis[i]) func(i, vis, adj, ans);
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<int> ans;
        int n= adj.size();
        int vis[n] = {0};
        func(0, vis, adj, ans);
        return ans;
    }
};
// TC: O(v+e), SC: O(v)
// editorial video