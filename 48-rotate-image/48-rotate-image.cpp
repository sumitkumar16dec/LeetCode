class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        //step 1: find transpose
        for(int i=0;i<n;i++){                               // O(n)
            for(int j=0;j<i;j++){                           // O(n)
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //step 2: reverse each row
        for(int i=0;i<n;i++){                               // O(n)
            reverse(matrix[i].begin(), matrix[i].end());    // O(n)
        }
    }
};
// TC: O(n^2 + n^2) , SC: O(1)
// https://youtu.be/Y72QeX0Efxw