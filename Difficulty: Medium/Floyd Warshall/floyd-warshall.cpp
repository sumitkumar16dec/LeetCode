// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        int n= dist.size();
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(dist[i][k]!=1e8 && dist[k][j]!=1e8){
                        dist[i][j]= min(dist[i][j], dist[i][k]+dist[k][j]);
                    }
                }
            }
        }
        
        // Extra
        for(int i=0;i<n;i++){
            if(dist[i][i]<0) cout<<"Negative weight cycle";
        }
    }
};
// TC: O(V^3), SC: O(V^2) since working on matrix
// https://youtu.be/YbY8cVwWAvw