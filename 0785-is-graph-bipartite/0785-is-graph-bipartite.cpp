class Solution {
private:
    bool dfs(int node, int color, int vis[], vector<vector<int>>& graph){
        vis[node]= color;

        for(auto it: graph[node]){

            if(vis[it]==-1){
                if(dfs(it, !color, vis, graph)==false) return false;
            }
            else if(vis[it]==vis[node]) return false;
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
	            if(dfs(i, 0, vis, graph)==false) return false;
	        }
	    }
	    return true;
    }
};
// TC: O(V+E), SC: O(V)
// https://youtu.be/KG5YFfR0j8A