//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    void dfs(int node, int vis[], stack<int> &st, vector<vector<int>> &adj){
        vis[node]=1;
        for(int i: adj[node]){
            if(vis[i]==0){
                dfs(i, vis, st, adj);
            }
        }
        st.push(node);
    }
  
  public:
    // Function to return list containing vertices in Topological order.
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        int V= adj.size();
        int vis[V]= {0};
        stack<int> st;
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                dfs(i, vis, st, adj);
            }
        }
        
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
// TC: O(v+e), SC: O(2n)
// https://youtu.be/5lZ0iJMrUMk


//{ Driver Code Starts.

/*  Function to check if elements returned by user
 *   contains the elements in topological sorted form
 *   V: number of vertices
 *   *res: array containing elements in topological sorted form
 *   adj[]: graph input
 */
int check(int V, vector<int> &res, vector<vector<int>> adj) {

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        int u, v;

        vector<vector<int>> adj(N);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> res = obj.topologicalSort(adj);

        cout << check(N, res, adj) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends