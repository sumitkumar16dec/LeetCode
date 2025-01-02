class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=0, sum=0;
        for(int i: nums){
            sum+= i;
            if(sum<0) sum=0;
            maxSum= max(maxSum, sum);
        }
        return maxSum;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/w_KEocd__20