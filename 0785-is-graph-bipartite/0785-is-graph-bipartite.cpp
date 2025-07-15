class Solution {
private:
    bool bfs(int start, int color[], int V, vector<vector<int>> &graph){
        color[start]=0;
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int node= q.front(); q.pop();
            for(int i: graph[node]){
                if(color[i]==-1){
                    color[i]=!color[node];
                    q.push(i);
                }
                else if(color[i]==color[node]) return false;
            }
        }
        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V= graph.size();
        int color[V];
        for(int i=0;i<V;i++) color[i]=-1;

        for(int i=0;i<V;i++){
            if(color[i]==-1){
                if(bfs(i, color, V, graph)==false) return false;
            }
        }
        return true;
    }
};