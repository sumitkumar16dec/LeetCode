class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // step1: find transpose
        for(int i=0;i<matrix.size();i++){           // O(n^2)
            for(int j=0;j<i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // step2: reverse each row
        for(int i=0;i<matrix.size();i++){           // O(n^2)
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
// TC: O(n^2 + n^2) , SC: O(1)
// https://youtu.be/Y72QeX0Efxw