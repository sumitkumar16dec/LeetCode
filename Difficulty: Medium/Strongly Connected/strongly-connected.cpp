//Position this line where user code will be pasted.
class Solution {
  private:
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj, stack<int> &st){
        vis[node]=1;
        for(int i: adj[node]){
            if(!vis[i]) dfs(i, vis, adj, st);
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
        // step 1: sort acrding to finish time
        stack<int> st;                          // SC: O(V)
        int v= adj.size();
        vector<int> vis(v,0);                   // SC: O(V)
        for(int i=0;i<v;i++){                   // O(V+E)
            if(!vis[i]) dfs(i, vis, adj, st);
        }
        
        // step 2: transpose
        vector<vector<int>> adjT(v);            // SC: O(V+E)
        for(int i=0;i<v;i++){                   // O(V+E)
            vis[i]=0;
            for(auto it: adj[i]){
                adjT[it].push_back(i);
            }
        }
        
        // step 3: ant dfs calls from stack elements
        int scc=0;
        while(!st.empty()){                     // O(V+E)
            int node= st.top(); st.pop();
            if(!vis[node]){
                scc++;
                dfs2(node, vis, adjT);
            }
        }
        return scc;
    }
};
// TC: O(3(V+E)), SC: O(V+E + 2V)
// https://youtu.be/R6uoSjZ2imo