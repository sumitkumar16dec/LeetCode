class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        int sum=0;
        vector<int> vis(V,0);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        minHeap.push({0,0});
        while(!minHeap.empty()){
            int wt= minHeap.top().first;
            int node= minHeap.top().second;
            minHeap.pop();
            
            if(!vis[node]){
                sum+= wt;
                vis[node]=1;
                for(auto ne: adj[node]){
                    int adjNode= ne[0];
                    int edWt= ne[1];
                    if(!vis[adjNode]) minHeap.push({edWt,adjNode});
                }
            }
        }
        return sum;
    }
};
// TC: O(ElogV), SC: O(V+E)
// https://youtu.be/mJcZjjKzeqk