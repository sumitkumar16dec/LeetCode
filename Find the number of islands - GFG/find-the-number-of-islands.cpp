// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    void dfs(int i, int j, char vis[][501], vector<vector<char>> &grid, int n, int m){
        if(i<0 || j<0 || i>=n || j>=m) return;
        if(grid[i][j]=='0') return;
        if(vis[i][j]=='0'){
            vis[i][j]='1';
            dfs(i+1, j, vis, grid, n, m);
            dfs(i-1, j, vis, grid, n, m);
            dfs(i, j+1, vis, grid, n, m);
            dfs(i, j-1, vis, grid, n, m);
            dfs(i+1, j+1, vis, grid, n, m);
            dfs(i+1, j-1, vis, grid, n, m);
            dfs(i-1, j+1, vis, grid, n, m);
            dfs(i-1, j-1, vis, grid, n, m);
        }
    }
  
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size();
        char vis[501][501];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vis[i][j]='0';
            }
        }
        
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]=='0' && grid[i][j]=='1'){
                    dfs(i, j, vis, grid, n, m);
                    c++;
                }
            }
        }
        return c;
    }
};
// https://www.youtube.com/watch?v=L2NShjXvUNM

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends