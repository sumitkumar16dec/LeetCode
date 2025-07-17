//Position this line where user code will be pasted.
class Solution {
  private:
    void dfs(int node, vector<int> &vis, stack<int> &st, vector<vector<int>> &adj){
        vis[node]=1;
        for(int i: adj[node]){
            if(!vis[i]) dfs(i, vis, st, adj);
        }
        st.push(node);
    }
    
    void dfs2(int node, vector<int> &vis, vector<vector<int>> &adjT){
        vis[node]=1;
        for(int i: adjT[node]){
            if(!vis[i]) dfs2(i, vis, adjT);
        }
    }
    
  public:
    int kosaraju(vector<vector<int>> &adj) {
        // step 1: sort acd to finishing time
        stack<int> st;                          // SC: O(v)
        int v= adj.size();
        vector<int> vis(v,0);                   // SC: O(v)
        for(int i=0;i<v;i++){
            if(!vis[i]) dfs(i, vis, st, adj);
        }
        
        // step 2: transpose edges
        vector<vector<int>> adjT(v);            // SC: O(v+e)
        for(int i=0;i<v;i++){
            vis[i]=0;
            for(int it: adj[i]){
                adjT[it].push_back(i);
            }
        }
        
        // step 3: dfs from finishing node
        int scc=0;
        while(!st.empty()){
            int node= st.top(); st.pop();
            if(!vis[node]){
                scc++;
                dfs2(node, vis, adjT);
            }
        }
        return scc;
    }
};
// TC: O(v+e), SC: O(v+e)