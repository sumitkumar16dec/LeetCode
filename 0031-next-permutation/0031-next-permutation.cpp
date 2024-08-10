class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size(), n1=-1, n2=-1;
        //step 1: find kisko swap karna hai
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) {n1=i; break;}
        }

        //step 2: find kisse swap karna hai
        if(n1!=-1){
            for(int i=n-1;i>=0;i--){
                if(nums[i]>nums[n1]) {n2=i; break;}
            }
        }

        // swap
        if(n1!=-1) swap(nums[n1], nums[n2]);

        // reverse
        reverse(nums.begin()+n1+1, nums.end());
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/LuLCLgMElus