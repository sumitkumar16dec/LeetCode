//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private:
    bool bfs(int node, int vis[], vector<int> adj[]){
        vis[node]= 0;
        queue<int> q;
        q.push(node);
        
        while(!q.empty()){
            node= q.front();
            q.pop();
            
            for(auto it: adj[node]){
                
                if(vis[it]==-1){
                    vis[it] = !vis[node];
                    q.push(it);
                }
                else if(vis[it]==vis[node]) return false;
            }
        }
        return true;
    }
    
public:
	bool isBipartite(int V, vector<int>adj[]){
	    int vis[V];
	    for(int i=0;i<V;i++) vis[i]=-1;
	    
	    for(int i=0;i<V;i++){
	        if(vis[i]==-1){
	            if(bfs(i, vis, adj)==0) return false;
	        }
	    }
	    return true;
	}
};
// TC: O(V+E), SC: O(2V)
// https://youtu.be/-vu34sct1g8


//{ Driver Code Starts.
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
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends