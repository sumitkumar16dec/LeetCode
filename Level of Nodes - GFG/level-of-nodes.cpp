// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int bfs(vector<int> adj[], int V, int vis[], int level[], int X) 
	{
        if(X>=V) return -1;
            
        int x = 0; if(x==X) return 0;

        queue<int> q;
        q.push(x);

        vis[x]=1;
        level[x]=0;
    
        while(!q.empty()){
            int curr = q.front();
            q.pop();

            for(int i: adj[curr]){
                if(!vis[i]){
                    q.push(i);
                    level[i] = level[curr]+1;
                    vis[i]=1;
                    if(i==X) return level[X];
                }
            }
        }
    }
	
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    int level[V]={0}, vis[V]={0};
	    return bfs(adj, V, level, vis, X);
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}

  // } Driver Code Ends