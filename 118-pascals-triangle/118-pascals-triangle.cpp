class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);             // SC: O(n^2)
        for(int i=0;i<numRows;i++){                 // O(n)
            r[i].resize(i+1);
            r[i][0]=1; r[i][i]=1;
            for(int j=1;j<i;j++){                   // O(n)
                r[i][j]=r[i-1][j-1] + r[i-1][j];
            }
        }
        
        return r;
    }
};
// TC: O(n^2) , SC: O(n^2)
// https://youtu.be/6FLvhQjZqvM