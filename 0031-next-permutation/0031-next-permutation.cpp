class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind1=-1, ind2=-1, n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i; break;
            }
        }

        if(ind1!=-1){
            for(int i=n-1;i>=0;i--){
                if(nums[i]>nums[ind1]){
                    ind2=i;
                    break;
                }
            }
        }

        if(ind1!=-1){
            swap(nums[ind1], nums[ind2]);
        }

        reverse(nums.begin()+ind1+1, nums.end());
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/LuLCLgMElus