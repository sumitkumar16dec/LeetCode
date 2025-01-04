class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size(), n= matrix[0].size();
        int low=0, high=m*n-1;
        while(low<=high){
            int mid= (low+high)>>1;
            if(matrix[mid/m][mid%m]==target) return true;
            else if(matrix[mid/m][mid%m]<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};
// TC: O(log m*n) , SC: O(1)
// https://youtu.be/ZYpYur0znng