class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN, n=nums.size();
        int pre=1, suf=1;
        for(int i=0;i<n;i++){
            if(pre==0) pre=1;
            if(suf==0) suf=1;

            pre *= nums[i];
            suf *= nums[n-i-1];
            maxi= max(maxi, max(pre,suf));
        }
        return maxi;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/hnswaLJvr6g