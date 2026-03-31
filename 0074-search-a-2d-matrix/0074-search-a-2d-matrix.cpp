class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size(), n= matrix[0].size(), a=0, b=m*n-1;
        while(a<=b){
            int mid= (a+b)>>1;
            if(matrix[mid/n][mid%n] == target) return true;
            else if(matrix[mid/n][mid%n] < target) a= mid+1;
            else b= mid-1;
        }
        return false;
    }
};
// TC: O(log m*n) , SC: O(1)
// https://youtu.be/ZYpYur0znng