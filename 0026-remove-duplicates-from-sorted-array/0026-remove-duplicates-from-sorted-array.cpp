class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[a]){
                a++;
                nums[a]=nums[i];
            }
        }
        return a+1;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/Fm_p9lJ4Z_8