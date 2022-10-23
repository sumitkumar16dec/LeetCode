class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0, ct=0;
        for(int i=0;i<nums.size();i++){                 // O(n)
            if(nums[i]==1) ct++;
            else ct=0;
            
            maxi= max(maxi, ct);
        }
        return maxi;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/Mo33MjjMlyA