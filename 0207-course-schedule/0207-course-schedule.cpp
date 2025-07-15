class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        for(auto it: prerequisites){
            adj[it[0]].push_back(it[1]);
        }

        vector<int> indegree(n);
        for(int i=0;i<n;i++){
            for(int it: adj[i]){
                indegree[it]++;
            }
        }

        queue<int> q;
        for(int i=0;i<n;i++){
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
        if(topo.size()==n) return true;
        return false;
    }
};
// TC: O(v+e), SC: O(2v)
// https://youtu.be/WAOfKpxYHR8