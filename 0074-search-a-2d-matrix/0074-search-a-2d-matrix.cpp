class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size(), n= matrix[0].size();
        int l= 0, h= m*n-1;
        while(l<=h){
            int mid= (l+h)>>1;
            if(matrix[mid/n][mid%n]<target) l=mid+1;
            else if(matrix[mid/n][mid%n]>target) h=mid-1;
            else return true;
        }
        return false;
    }
};
// TC: O(log m*n) , SC: O(1)
// https://youtu.be/ZYpYur0znng