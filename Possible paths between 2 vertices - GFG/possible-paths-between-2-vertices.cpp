// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        int count = 0;
        bool vis[V];
        for(int i=0;i<V;i++){
            vis[i]=false;
        }
        for(int i=0;i<V;i++){
            if(i==source) {vis[i]=true; dfs(source, adj, destination, count, vis);}
        }
        return count;
    }
    
    void dfs(int node, vector<int> adj[], int destination, int& count, bool vis[]){
        if(node==destination) {count++; vis[node]=false;}
        for(auto neighbour: adj[node]){
            if(!vis[neighbour]) {vis[neighbour]=true; dfs(neighbour, adj, destination, count, vis);}
        }
        
        vis[node]=false;
    }
    
};
// https://www.youtube.com/watch?v=8Vrb7ZjVqPg
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
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}  // } Driver Code Ends