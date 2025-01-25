//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    bool check(int node, vector<vector<int>> &adj, int vis[], int dfsvis[]){
        vis[node]=1;
        dfsvis[node]=1;
        
        for(auto it: adj[node]){
            if(vis[it]==0){
                if(check(it, adj, vis, dfsvis)) return true;
            }else{
                if(dfsvis[it]==1) return true;
            }
        }
        dfsvis[node]=0;
        return false;
    }
  
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<vector<int>> adj) {
        int vis[V]={0}, dfsvis[V]={0};
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(check(i, adj, vis, dfsvis)) return true;
            }
        }
        return false;
    }
};
// TC: O(n+e), SC: O(n)
// https://youtu.be/uzVUw90ZFIg


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends