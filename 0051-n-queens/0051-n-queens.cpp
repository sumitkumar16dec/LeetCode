class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp(n);
        string s(n,'.');
        for(int i=0;i<n;i++) temp[i]=s;
        vector<int> side(n,0), lowerdiagonal(2*n-1, 0), upperdiagonal(2*n-1, 0);
        func(0, temp, ans, n, side, lowerdiagonal, upperdiagonal);
        return ans;
    }

private:
    void func(int col, vector<string> &temp, vector<vector<string>> &ans, int n, vector<int> &side, vector<int> &lowerdiagonal, vector<int> &upperdiagonal){
        if(col==n){
            ans.push_back(temp);
            return;
        }

        for(int row=0;row<n;row++){
            if(side[row]==0 && lowerdiagonal[row+col]==0 && upperdiagonal[col-row + n-1]==0){
                temp[row][col]='Q';
                side[row]=1;
                lowerdiagonal[row+col]=1;
                upperdiagonal[col-row + n-1]=1;

                func(col+1, temp, ans, n, side, lowerdiagonal, upperdiagonal);

                temp[row][col]='.';
                side[row]=0;
                lowerdiagonal[row+col]=0;
                upperdiagonal[col-row + n-1]=0;
            }
        }
    }
};
// TC: O(n!)
// https://youtu.be/i05Ju7AftcM