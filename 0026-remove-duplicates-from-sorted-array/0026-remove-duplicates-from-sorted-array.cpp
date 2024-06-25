class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=0, i=0, n=nums.size();
        while(i<n){
            if(nums[a]!=nums[i]) nums[++a]=nums[i++];
            else i++;
        }
        return a+1;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/Fm_p9lJ4Z_8