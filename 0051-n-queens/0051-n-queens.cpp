class Solution {
private:
    void func(int col, vector<string> &ds, vector<vector<string>> &ans, vector<int> &leftrow, vector<int> &upperdiagonal, vector<int> &lowerdiagonal, int n){
        if(col==n) {ans.push_back(ds); return;}

        for(int row=0;row<n;row++){
            if(leftrow[row]==0 && upperdiagonal[n-1 + col-row]==0 && lowerdiagonal[row+col]==0){
                ds[row][col]='Q';
                leftrow[row]=1;
                upperdiagonal[n-1 + col-row]=1;
                lowerdiagonal[row+col]=1;

                func(col+1, ds, ans, leftrow, upperdiagonal, lowerdiagonal, n);

                ds[row][col]='.';
                leftrow[row]=0;
                upperdiagonal[n-1 + col-row]=0;
                lowerdiagonal[row+col]=0;
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> ds(n);
        string s(n,'.');
        for(int i=0;i<n;i++) ds[i]=s;
        vector<int> leftrow(n,0), upperdiagonal(2*n-1,0), lowerdiagonal(2*n-1,0);
        func(0, ds, ans, leftrow, upperdiagonal, lowerdiagonal, n);
        return ans;
    }
};
// TC: O(n!)
// https://youtu.be/i05Ju7AftcM