class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        
        for(int i=0;i<numRows;i++){         // O(n)
            res[i].resize(i+1);
            res[i][0]=res[i][i]=1;
            for(int j=1;j<i;j++){           // O(n)
                res[i][j]= res[i-1][j-1] + res[i-1][j];
            }
        }
        
        return res;
    }
};
// TC: O(n^2) , SC: O(n^2)
// https://youtu.be/6FLvhQjZqvM