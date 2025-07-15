class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        vector<int> ans;
        int n= adj.size();
        int vis[n]={0};
        queue<int> q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            ans.push_back(node);
            for(int nb: adj[node]){
                if(!vis[nb]){
                    q.push(nb);
                    vis[nb]=1;
                }
            }
        }
        return ans;
    }
};
// TC: O(n+2e), SC: O(3n)
// https://youtu.be/-tgVpUgsQ5k