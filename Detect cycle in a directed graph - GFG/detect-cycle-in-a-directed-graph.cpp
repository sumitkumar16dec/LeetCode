// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool solve(int i, vector<int> &vis, vector<int> &order, vector<int> adj[]){
        vis[i]=1;
        order[i]=1;
        for(auto x : adj[i]){
            if(!vis[x]){
                bool conf = solve(x, vis, order, adj);
                if(conf==true) return true;
            }
            else if(order[x]==1) return true;
        }
        order[i]=0;
        return false;
    }
  
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vector<int> order(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bool c= solve(i, vis, order, adj);
                if(c==true) return true;
            }
        }
        return false;
    }
};
// https://www.youtube.com/watch?v=1u2VLzBhJZU
// { Driver Code Starts.

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