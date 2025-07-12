class Solution {
private:
    int smallerEqualCnt(vector<vector<int>>& matrix, int x){
        int cnt=0, n=matrix.size();
        int row=0, col=n-1;
        while(row<n && col>=0){
            if(matrix[row][col]<=x){
                cnt+= (col+1);
                row++;
            }
            else col--;
        }

        return cnt;
    }

public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n= matrix.size();
        int l= matrix[0][0], h= matrix[n-1][n-1];
        int ans=-1;
        while(l<=h){
            int mid= l+(h-l)/2;
            int cnt= smallerEqualCnt(matrix, mid);
            if(cnt>=k){
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};
// TC: O(log(max-min)*2n), SC: O(1)
// https://youtu.be/MOe7LlagCN8 + https://www.geeksforgeeks.org/dsa/kth-smallest-element-in-a-row-wise-and-column-wise-sorted-2d-array/