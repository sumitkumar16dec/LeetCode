//Position this line where user code will be pasted.
class Solution {
  public:
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj, stack<int> &st){
        vis[node]=1;
        for(int it: adj[node]){
            if(!vis[it]) dfs(it, vis, adj, st);
        }
        st.push(node);
    }
    
    void dfs2(int node, vector<int> &vis, vector<vector<int>> &adj){
        vis[node]=1;
        for(int it: adj[node]){
            if(!vis[it]) dfs2(it, vis, adj);
        }
    }
  
    int kosaraju(vector<vector<int>> &adj) {
        // step 1: sort acd to finishing time
        stack<int> st;                          // SC: O(v)
        int n= adj.size();
        vector<int> vis(n,0);                   // SC: O(v)
        for(int i=0;i<n;i++){                   // O(v+e)
            if(!vis[i]) dfs(i, vis, adj, st);
        }
        
        // step 2: transpose edges
        vector<vector<int>> adjT(n);            // SC: O(v+e)
        for(int i=0;i<n;i++){                   // O(v+e)
            vis[i]=0;
            for(int it: adj[i]){
                adjT[it].push_back(i);
            }
        }
        
        // step 3: count scc
        int scc=0;
        while(!st.empty()){                     // O(v+e)
            int node= st.top(); st.pop();
            if(!vis[node]){
                scc++;
                dfs2(node, vis, adjT);
            }
        }
        return scc;
    }
};
// O(3(V+E)), SC: O(V+E + 2V)
// https://youtu.be/R6uoSjZ2imo