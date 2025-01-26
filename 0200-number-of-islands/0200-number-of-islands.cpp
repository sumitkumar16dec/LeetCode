class Solution {
private:
    void bfs(int row, int col, vector<vector<char>> grid, vector<vector<int>> &vis, int delRow[], int delCol[], int n, int m){
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row, col});

        while(!q.empty()){
            row= q.front().first;
            col= q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int nrow= row+delRow[i];
                int ncol= col+delCol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m
                   && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                       vis[nrow][ncol]= 1;
                       q.push({nrow, ncol});
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size();
        int m= grid[0].size();
        int delRow[4]= {-1, 0, 1, 0};
        int delCol[4]= {0, 1, 0, -1};

        int cnt= 0;
        vector<vector<int>> vis(n, vector<int> (m, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    cnt++;
                    bfs(i, j, grid, vis, delRow, delCol, n, m);
                }
            }
        }

        return cnt;
    }
};
// TC: O(n^2), SC: O(n^2)
// https://youtu.be/muncqlKJrH0