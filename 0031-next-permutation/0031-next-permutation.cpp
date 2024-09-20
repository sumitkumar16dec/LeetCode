class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i1=-1, i2=-1, n=nums.size();
        //step1: find jisko swap karna hai
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) {i1=i; break;}
        }

        //step2: find jisse swap karna hai
        if(i1!=-1){
            for(int i=n-1;i>=0;i--){
                if(nums[i]>nums[i1]) {i2=i; break;}
            }
        }

        if(i1!=-1) swap(nums[i1], nums[i2]);

        reverse(nums.begin()+i1+1, nums.end());
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/LuLCLgMElus