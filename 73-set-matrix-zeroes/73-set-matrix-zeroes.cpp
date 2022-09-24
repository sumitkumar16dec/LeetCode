class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1, row=matrix.size(), col=matrix[0].size();
        for(int i=0;i<row;i++){             // m
            if(matrix[i][0]==0) col0=0;
            for(int j=1;j<col;j++){         // n
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        
        for(int i=row-1;i>=0;i--){          // m
            for(int j=col-1;j>=1;j--){      // n
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
            if(col0==0) matrix[i][0]=0;
        }
        
    }
};
// TC: O(m*n + m*n) , SC: O(1)
// https://www.youtube.com/watch?v=M65xBewcqcI&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=8