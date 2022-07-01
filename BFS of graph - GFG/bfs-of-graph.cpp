// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> BFS(vector<int> adj[], int i, bool visited[]){
        vector<int> ans;
        queue<int> q;
        visited[i]=true;
        q.push(i);
        while(!q.empty()){
            int u= q.front();
            q.pop();
            ans.push_back(u);
            for(int v: adj[u]){
                if(visited[v]==false) {q.push(v); visited[v]=true;}
            }
        }
        return ans;
    }
  
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        bool visited[V+1];
        for(int i=0;i<V;i++){
            visited[i]=false;
        }
        
        for(int i=0;i<V;i++){
            if(visited[i]==false) return BFS(adj, i, visited);
        }
    }
};
// https://www.youtube.com/watch?v=8Vrb7ZjVqPg

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends