class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1, rows=matrix.size(), columns=matrix[0].size();
        for(int i=0;i<rows;i++){            // O(r*c)
            if(matrix[i][0]==0) col0=0;
            for(int j=1;j<columns;j++){
                if(matrix[i][j]==0) matrix[i][0]=matrix[0][j]=0;
            }
        }
        
        for(int i=rows-1;i>=0;i--){            // O(r*c)
            for(int j=columns-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
            if(col0==0) matrix[i][0]=0;
        }
        
    }
};
// TC: O(m*n + m*n) , SC: O(1)
// https://www.youtube.com/watch?v=M65xBewcqcI&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=8