class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(V);
        for(auto it: prerequisites){
            adj[it[0]].push_back(it[1]);
        }

        queue<int> q;
        vector<int> indegree(V, 0);
        for(int i=0;i<V;i++){
            for(int it: adj[i]){
                indegree[it]++;
            }
        }
        for(int i=0;i<V;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int> topo;
        while(!q.empty()){
            int node= q.front(); q.pop();
            topo.push_back(node);
            for(int i: adj[node]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }

        if(topo.size()==V) return true;
        return false;
    }
};
// TC: O(v+e), SC: O(2v)
// https://youtu.be/WAOfKpxYHR8