// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	vector<int> order;
	void dfs(int src, vector<int> &vis, vector<int> g[]){
	    vis[src] = 1;
	    for(auto x : g[src]){
	        if(!vis[x]) dfs(x, vis, g);
	    }
	    order.push_back(src);
	}
	
	void rdfs(int src, vector<int> &vis1, vector<int> rev[]){
	    vis1[src] = 1;
	    for(auto x : rev[src]){
	        if(!vis1[x]) dfs(x, vis1, rev);
	    }
	}
	
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        order.clear();
        vector<int> rev[V];
        for(int i=0;i<V;i++){
            for(auto x : adj[i]) rev[x].push_back(i);
        }
        
        vector<int> vis(V,0);
        for(int j=0;j<V;j++){
            if(!vis[j]) dfs(j,vis,adj);
        }
        
        vector<int> vis1(V,0);
        int c=0;
        for(int i=V-1;i>=0;i--){
            if(!vis1[order[i]]){
                rdfs(order[i],vis1,rev);
                c++;
            }
        }
        return c;
    }
};
// https://www.youtube.com/watch?v=RwkNLN5mBn8
// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends