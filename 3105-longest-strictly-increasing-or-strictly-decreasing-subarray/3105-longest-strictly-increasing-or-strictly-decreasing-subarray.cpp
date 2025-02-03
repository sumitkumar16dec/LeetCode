class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int in=1, de=1, maxi=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) in++;
            else in=1;

            if(nums[i]<nums[i-1]) de++;
            else de=1;

            maxi= max(maxi, max(in,de));
        }
        return maxi;
    }
};
// TC: O(n), SC: O(1)