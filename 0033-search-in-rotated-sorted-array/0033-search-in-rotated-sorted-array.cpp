class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size(), low=0, high=n-1;
        while(low<=high){
            int mid= (low+high)>>1;
            if(nums[mid]==target) return mid;
            else if(nums[low]<=nums[mid]){    // left half is sorted
                if(nums[low]<=target && target<=nums[mid]) high=mid-1;
                else low=mid+1;
            }
            else{       // right half is sorted
                if(target>=nums[mid] && target<=nums[high])low=mid+1;
                else high=mid-1;
            }
        }
        return -1;
    }
};
// TC: O(logn), SC: O(1)
// https://youtu.be/r3pMQ8-Ad5s