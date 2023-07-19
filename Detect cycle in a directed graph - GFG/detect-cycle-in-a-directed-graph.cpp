//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    bool checkCycle(int node, vector<int> adj[], int vis[], int dfsVis[]){
        vis[node]= 1;
        dfsVis[node]= 1;
        
        for(auto it: adj[node]){
            if(!vis[it]){
                if(checkCycle(it, adj, vis, dfsVis)) return true;
            }
            else if(dfsVis[it]) return true;
        }
        dfsVis[node]= 0;
        return false;
    }
  
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        int vis[V]= {0}, dfsVis[V]= {0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(checkCycle(i, adj, vis, dfsVis)) return true;
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

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends