//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    bool detect(int node, int parent, int vis[], vector<vector<int>>& adj){
        vis[node]=1;
        
        for(auto i: adj[node]){
            if(vis[i]==0){
                if(detect(i, node, vis, adj)) return true;
            }else if(i!=parent){
                return true;
            }
        }
        return false;
    }
  
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(vector<vector<int>>& adj) {
        int n= adj.size();
        int vis[n]= {0};
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                if(detect(i, -1, vis, adj)) return true;
            }
        }
        return false;
    }
};
// TC: O(2n+2e), SC: O(2n)
// https://youtu.be/zQ3zgFypzX4


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends