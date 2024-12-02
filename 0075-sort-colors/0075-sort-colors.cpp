class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0, i=0, n= nums.size()-1;
        while(i<=n){
            if(nums[i]==0){
                swap(nums[a++],nums[i++]);
            }
            else if(nums[i]==2){
                swap(nums[n--],nums[i]);
            }
            else i++;
        }
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/oaVa-9wmpns