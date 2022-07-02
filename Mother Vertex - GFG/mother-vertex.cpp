// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    void dfs(vector<int> adj[], int V, int i, vector<int> &vis){
        vis[i]=1;
        for(auto a : adj[i]){
            if(!vis[a]) dfs(adj, V, a, vis);
        }
    }
    
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    vector<int> vis(V, 0);
	    
	    int last_node=0;
	    for(int i=0;i<V;i++){
	        if(vis[i]==0){
	            dfs(adj, V, i, vis);
	            last_node=i;
	        }
	    }
	    
	    for(int i=0;i<V;i++) vis[i]=0;
	    
	    dfs(adj, V, last_node, vis);
	    
	    for(int i=0;i<V;i++){
	        if(vis[i]==0) return -1;
	        else return last_node;
	    }
	}

};
// https://www.youtube.com/watch?v=gTt5idzVCgA
// https://www.youtube.com/watch?v=gTt5idzVCgA
// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends