class DisjointSet{
    vector<int> parent, size;
  public:
    DisjointSet(int n){
        size.resize(n,1);
        parent.resize(n);
        for(int i=0;i<n;i++) parent[i]=i;
    }
    
    int ultPar(int node){
        if(node==parent[node]) return node;
        return parent[node] = ultPar(parent[node]);
    }
    
    void unionBySize(int u, int v){
        int up_u = ultPar(u), up_v = ultPar(v);
        if(size[up_u] < size[up_v]){
            parent[up_u]= up_v;
            size[up_v]+= size[up_u];
        }
        else{
            parent[up_v] = up_u;
            size[up_u]+= size[up_v];
        }
    }
};

class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        vector<pair<int,pair<int,int>>> edges;      // SC: O(e)
        for(int i=0;i<V;i++){                       // O(v+e)
            for(auto it: adj[i]){
                int u= i;
                int v= it[0];
                int wt= it[1];
                edges.push_back({wt,{u,v}});
            }
        }
        
        sort(edges.begin(), edges.end());           // O(eloge)
        
        int mstWt=0;
        DisjointSet ds(V);
        for(auto it: edges){                        // O(e 4alpha)
            int wt= it.first, u= it.second.first, v= it.second.second;
            if(ds.ultPar(u)!=ds.ultPar(v)){
                mstWt+=wt;
                ds.unionBySize(u,v);
            }
        }
        return mstWt;
    }
};
// TC: O(v+e + eloge + e), SC: O(E)
// https://youtu.be/DMnDM_sxVig