class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0, right=0, zeros=0;
        while(right<nums.size()){
            if(nums[right]==0) zeros++;
            if(zeros>k){
                if(nums[left]==0) zeros--;
                left++;
            }
            right++;
        }
        return right-left;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/3E4JBHSLpYk