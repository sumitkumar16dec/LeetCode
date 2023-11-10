class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        while(low<=high){                   // O(logn)
            int mid= low+(high-low)/2;

            if(nums[mid]==target) return mid;
            else if(nums[low]<=nums[mid]){  // left-half is sorted
                if(target>= nums[low] && target<=nums[mid]) high=mid-1;
                else low=mid+1;
            }
            else{   // right-half is sorted
                if(target>=nums[mid] && target<=nums[high]) low=mid+1;
                else high=mid-1;
            }
        }
        return -1;
    }
};