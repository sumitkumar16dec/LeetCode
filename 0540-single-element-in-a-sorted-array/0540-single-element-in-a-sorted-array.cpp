class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0, h=nums.size()-2;
        while(l<=h){
            int m= (l+h)>>1;
            if(nums[m] == nums[m^1]) l=m+1;
            else h=m-1;
        }
        return nums[l];
    }
};
// TC: O(logn), SC: O(1)
// https://youtu.be/PzszoiY5XMQ