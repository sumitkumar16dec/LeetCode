class Solution {
private:
    void dfs(vector<vector<int>> &image, int sr, int sc, int color, vector<vector<int>> &ans, int inicol, int delrow[], int delcol[], int n, int m){
        ans[sr][sc]=color;

        for(int i=0;i<4;i++){
            int row= sr+delrow[i];
            int col= sc+delcol[i];

            if(row>=0 && row<n && col>=0 && col<m && image[row][col]==inicol && ans[row][col]!=color){
                dfs(image, row, col, color, ans, inicol, delrow, delcol, n, m);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans= image;
        int delrow[]= {-1, 0, 1, 0};
        int delcol[]= {0, 1, 0, -1};
        int inicol= image[sr][sc];
        int n= image.size(), m= image[0].size();
        dfs(image, sr, sc, color, ans, inicol, delrow, delcol, n, m);
        return ans;
    }
};
// TC: O(n*m), SC: O(n*m)[ans matrix] + O(n*m)[recursion stack space] + O(n+m) [delRow,delCol] = O(2(n*m)+(n+m))
// https://youtu.be/C-2_uSRli8o