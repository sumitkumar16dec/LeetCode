class Solution {
public:
    void recursion(vector<vector<int>> &image, int sr, int sc, int color, vector<vector<int>> &ans, int delrow[], int delcol[], int n, int m, int iniColor){
        ans[sr][sc]=color;

        for(int i=0;i<4;i++){
            int row= sr+delrow[i];
            int col= sc+delcol[i];
            if(row>=0 && row<n && col>=0 && col<m && image[row][col]==iniColor && ans[row][col]!=color){
                ans[row][col]=color;
                recursion(image, row, col, color, ans, delrow, delcol, n, m, iniColor);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans= image;
        int delrow[4]= {-1,0,1,0}, delcol[4]={0,1,0,-1}, n=image.size(), m=image[0].size(), iniColor= image[sr][sc];
        recursion(image, sr, sc, color, ans, delrow, delcol, n, m, iniColor);
        return ans;
    }
};
// TC: O(n*m), SC: O(n*m)[ans matrix] + O(n*m)[recursion stack space] + O(n+m) [delRow,delCol] = O(2(n*m)+(n+m))
// https://youtu.be/C-2_uSRli8o