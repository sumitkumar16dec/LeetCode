class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0, high=nums.size()-2;
        while(low<=high){
            int mid= (low+high)>>1;
            if(nums[mid]==nums[mid^1]) low=mid+1;   // non duplicate is in right side
            else high=mid-1;    // non d is in left
        }
        return nums[low];
    }
};
// TC: O(logn), SC: O(1)
// https://youtu.be/PzszoiY5XMQ