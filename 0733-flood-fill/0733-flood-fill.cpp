class Solution {
private:
    void dfs(vector<vector<int>> &image, int sr, int sc, int color, int iniColor, int delrow[], int delcol[], int n, int m, vector<vector<int>> &ans){
        ans[sr][sc]= color;

        for(int i=0;i<4;i++){
            int row= sr+delrow[i];
            int col= sc+delcol[i];

            if(row>=0 && row<n && col>=0 && col<m && image[row][col]==iniColor && ans[row][col]!=color){
                dfs(image, row, col, color, iniColor, delrow, delcol, n, m, ans);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans= image;
        int delrow[]= {-1, 0, 1, 0};
        int delcol[]= {0, 1, 0, -1};
        int iniColor= image[sr][sc];
        int n= image.size(), m= image[0].size();
        dfs(image, sr, sc, color, iniColor, delrow, delcol, n, m, ans);
        return ans;
    }
};
// TC: O(n*m), SC: O(n*m)[ans matrix] + O(n*m)[recursion stack space] + O(n+m) [delRow,delCol] = O(2(n*m)+(n+m))
// https://youtu.be/C-2_uSRli8o