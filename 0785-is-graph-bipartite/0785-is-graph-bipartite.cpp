class Solution {
private:
    bool bfs(int node, int vis[], vector<vector<int>>& graph){
        vis[node]= 0;
        queue<int> q;
        q.push(node);
        
        while(!q.empty()){
            node= q.front();
            q.pop();
            
            for(auto it: graph[node]){
                
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
    bool isBipartite(vector<vector<int>>& graph) {
        int V= graph.size();
        int vis[V];
	    for(int i=0;i<V;i++) vis[i]=-1;
	    
	    for(int i=0;i<V;i++){
	        if(vis[i]==-1){
	            if(bfs(i, vis, graph)==0) return false;
	        }
	    }
	    return true;
    }
};
// TC: O(V+E), SC: O(2V)
// https://youtu.be/-vu34sct1g8