//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template
class Solution {
  public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex src.
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
        int V= adj.size();
        set<pair<int,int>> st;
        vector<int> dist(V,1e9);
        st.insert({0,src});
        dist[src]=0;
        while(!st.empty()){
            auto it= *(st.begin());
            int dis= it.first;
            int node= it.second;
            st.erase(it);
            
            for(auto i: adj[node]){
                int adjNode= i.first;
                int edgeDis= i.second;
                
                if(dis+edgeDis < dist[adjNode]){
                    if(dist[adjNode]!=1e9) st.erase({dist[adjNode],adjNode});
                    dist[adjNode]= dis+edgeDis;
                    st.insert({dist[adjNode],adjNode});
                }
            }
        }
        return dist;
    }
};
// TC: O(VlogV + V), SC: O(E+V)
// https://youtu.be/V6H1qAeB-l4


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<pair<int, int>>> adj(V);
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            pair<int, int> t1 = {v, w}, t2 = {u, w};
            adj[u].push_back(t1);
            adj[v].push_back(t2);
        }
        int src;
        cin >> src;
        cin.ignore();

        Solution obj;
        vector<int> res = obj.dijkstra(adj, src);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends