class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN, sum=0;
        for(int i: nums){
            sum+= i;
            maxSum= max(maxSum, sum);
            if(sum<0) sum=0;
        }
        return maxSum;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/w_KEocd__20