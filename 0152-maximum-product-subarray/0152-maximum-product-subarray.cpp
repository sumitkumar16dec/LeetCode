class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        int pre=1, suf=1, maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(pre==0) pre=1;
            if(suf==0) suf=1;

            pre*=nums[i];
            suf*=nums[n-1-i];

            maxi= max(maxi, max(pre,suf));
        }
        return maxi;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/hnswaLJvr6g