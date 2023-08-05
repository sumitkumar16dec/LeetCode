//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        int sum= 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,0});     // {wt, node}   [Reverse won't work as it will sort accor to node value, not weight ]
        vector<int> vis(V,0);
        while(!pq.empty()){     // E
            auto it= pq.top();
            pq.pop();    // log E
            int node= it.second;
            int wt= it.first;
            
            if(vis[node]==1) continue;
            
            vis[node]=1;
            sum+=wt;
            for(auto it: adj[node]){    // overall E
                int adjNode= it[0];
                int adjWt= it[1];
                
                if(vis[adjNode]==0)
                    pq.push({adjWt,adjNode});   // log E
            }
        }
        
        return sum;
    }
};
// TC: ElogE+ElogE= O(ElogE), SC: O(E)
// https://youtu.be/mJcZjjKzeqk


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends