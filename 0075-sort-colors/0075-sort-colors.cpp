class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, a=0, n=nums.size()-1;
        while(i<=n){
            if(nums[i]==0) {swap(nums[a], nums[i]); i++; a++;}
            else if(nums[i]==1) i++;
            else {swap(nums[i],nums[n]); n--;}
        }
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/oaVa-9wmpns