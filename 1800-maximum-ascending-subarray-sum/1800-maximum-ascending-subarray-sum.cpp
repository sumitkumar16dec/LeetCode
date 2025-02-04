class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size(), maxi=0, sum=0;
        if(n==1) return nums[0];
        for(int i=0;i<=n-2;i++){
            if(nums[i]<nums[i+1]) sum+=nums[i];
            else{
                sum+=nums[i];
                maxi= max(maxi,sum);
                sum=0;
            }   
        }
        if(nums[n-2]<nums[n-1]) sum+=nums[n-1];
        else sum=nums[n-1];
        return max(maxi,sum);
    }
};
// TC: O(n), SC: O(1)