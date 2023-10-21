class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        for(int i=0;i<n;i++){       // O(n^2)
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<n;i++){       // O(n^2)
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
// TC: O(n^2), SC: O(1)
// https://youtu.be/Y72QeX0Efxw