//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    void dfs(int start, int vis[], vector<int> &ans, vector<vector<int>> &adj){
        ans.push_back(start);
        vis[start]=1;
        
        for(auto node: adj[start]){
            if(vis[node]==0) dfs(node, vis, ans, adj);
        }
    }
  
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        int n= adj.size();
        vector<int> ans;
        int vis[n]= {0};
        int start=0;
        dfs(start, vis, ans, adj);
        return ans;
    }
};
// TC: O(v+e), SC: O(v)
// editorial video


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends