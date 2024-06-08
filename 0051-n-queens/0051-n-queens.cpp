class Solution {
public:
    void func(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &left, vector<int> &lowerdiagonal, vector<int> &upperdiagonal, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){
            if(left[row]==0 && lowerdiagonal[row+col]==0 && upperdiagonal[col-row + n-1]==0){
                board[row][col]='Q';
                left[row]=1;
                lowerdiagonal[row+col]=1;
                upperdiagonal[col-row + n-1]=1;

                func(col+1, board, ans, left, lowerdiagonal, upperdiagonal, n);

                board[row][col]='.';
                left[row]=0;
                lowerdiagonal[row+col]=0;
                upperdiagonal[col-row + n-1]=0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++) board[i]=s;
        vector<int> left(n,0), lowerdiagonal(2*n-1,0), upperdiagonal(2*n-1,0);
        func(0, board, ans, left, lowerdiagonal, upperdiagonal, n);
        return ans;
    }
};
// TC: O(n!)
// https://youtu.be/i05Ju7AftcM