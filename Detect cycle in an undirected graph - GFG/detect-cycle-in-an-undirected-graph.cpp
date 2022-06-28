// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool dfs(vector<int> adj[], int i, bool vis[], int parent){
        vis[i]=true;
        
        for(auto u: adj[i]){
            if(vis[u]==false) {if(dfs(adj, u, vis, i)==true) return true;}
            else if(u!=parent) return true;
        }
        return false;
    }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        bool vis[V];
        for(int i=0;i<V;i++){
            vis[i]=false;
        }

        for(int i=0;i<V;i++){
            if(vis[i]==false) {if(dfs(adj, i, vis, -1)==true) return true;}
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends