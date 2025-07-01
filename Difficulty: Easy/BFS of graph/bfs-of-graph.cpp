class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        vector<int> ans;            // SC: O(n)
        int n= adj.size();
        int vis[n]= {0};            // SC: O(n)
        queue<int> q;               // SC: O(n)
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            ans.push_back(node);
            for(int i: adj[node]){
                if(vis[i]==0){
                    q.push(i);
                    vis[i]=1;
                }
            }
        }
        return ans;
    }
};
// TC: O(n+2e), SC: O(3n)
// https://youtu.be/-tgVpUgsQ5k