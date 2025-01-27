//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Position this line where user code will be pasted.
class Solution {
  public:
    vector<int> order;
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj){
        vis[node]= 1;
        
        for(int i: adj[node]){
            if(!vis[i]) dfs(i, vis, adj);
        }
        order.push_back(node);
    }
    
    void rdfs(int node, vector<int> &vis1, vector<int> rev[]){
        vis1[node]= 1;
        
        for(auto i: rev[node]){
            if(!vis1[i]) rdfs(i, vis1, rev);
        }
    }
    
    int kosaraju(vector<vector<int>> &adj) {
        int V= adj.size();
        vector<int> rev[V];
        order.clear();
        for(int i=0;i<V;i++){
            for(int j: adj[i]){
                rev[j].push_back(i);
            }
        }
        
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]) dfs(i, vis, adj);
        }
        
        vector<int> vis1(V,0);
        int c=0;
        for(int i=V-1;i>=0;i--){
            if(!vis1[order[i]]){
                rdfs(order[i], vis1, rev);
                c++;
            }
        }
        return c;
    }
};
// TC: O(v+e), SC: O(v+e)
// https://www.youtube.com/watch?v=RwkNLN5mBn8


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
        cout << obj.kosaraju(adj) << "\n";

        // cout << "~"
        //      << "\n";
    }

    return 0;
}

// } Driver Code Ends