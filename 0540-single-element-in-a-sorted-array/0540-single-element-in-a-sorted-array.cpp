class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0, high=nums.size()-2;
        while(low<=high){
            int mid= (low+high)>>1;

            if(nums[mid] != nums[mid^1]) high=mid-1;
            else low= mid+1;
        }
        return nums[low];
    }
};
// TC: O(logn), SC: O(1)
// https://youtu.be/PzszoiY5XMQ