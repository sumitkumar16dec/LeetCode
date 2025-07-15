class Solution {
  public:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid, int n, int m){
        vis[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});
        while(!q.empty()){
            int trow= q.front().first;
            int tcol= q.front().second;
            q.pop();
            
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int nrow= trow+i;
                    int ncol= tcol+j;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='L' && !vis[nrow][ncol]){
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }
  
    int countIslands(vector<vector<char>>& grid) {
        int cnt=0;
        int n= grid.size(), m= grid[0].size();
        vector<vector<int>> vis(n, vector<int> (m,0));
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col]=='L'){
                    cnt++;
                    bfs(row, col, vis, grid, n, m);
                }
            }
        }
        return cnt;
    }
};
// TC: O(m*n), SC: O(m*n)
// https://youtu.be/muncqlKJrH0