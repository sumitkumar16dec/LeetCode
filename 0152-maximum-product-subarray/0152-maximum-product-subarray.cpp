class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1, post=1, maxi=INT_MIN, n=nums.size();
        for(int i=0;i<n;i++){       // O(n)
            if(pre==0) pre=1;
            if(post==0) post=1;

            pre *= nums[i];
            post *= nums[n-i-1];

            maxi= max(maxi, max(pre,post));
        }
        return maxi;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/hnswaLJvr6g