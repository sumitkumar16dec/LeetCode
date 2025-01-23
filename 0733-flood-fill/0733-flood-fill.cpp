class Solution {
private:
    void dfs(vector<vector<int>>& image, vector<vector<int>>& ans, int sr, int sc, int iniCol, int newCol, int delRow[], int delCol[], int n, int m){
        ans[sr][sc]= newCol;
        
        for(int i=0;i<4;i++){
            int row= sr+delRow[i];
            int col= sc+delCol[i];

            if(row>=0 && row<n && col>=0 && col<m && image[row][col]==iniCol && ans[row][col]!=newCol){
                dfs(image, ans, row, col, iniCol, newCol, delRow, delCol, n, m);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans= image;
        int iniCol= image[sr][sc];

        int n= image.size();
        int m= image[0].size();
        int delRow[4]= {-1, 0, 1, 0};
        int delCol[4]= {0, 1, 0, -1};
        dfs(image, ans, sr, sc, iniCol, color, delRow, delCol, n, m);

        return ans; 
    }
};
// TC: O(n*m), SC: O(n*m)[ans matrix] + O(n*m)[recursion stack space] + O(n+m) [delRow,delCol] = O(2(n*m)+(n+m))
// https://youtu.be/C-2_uSRli8o