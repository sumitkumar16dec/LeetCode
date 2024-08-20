class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, h=nums.size()-1;
        while(l<=h){
            int m= (l+h)>>1;
            if(nums[m]==target) return m;
            else if(l<=m){      // left-half is sorted
                if(nums[l]<=target && target<=nums[m]) h=m-1;
                else l=m+1;
            }
            else{               // right-half is sorted
                if(nums[m]<=target && target<=nums[h]) l= m+1;
                else h= m-1;
            }
        }
        return -1;
    }
};
// TC: O(logn), SC: O(1)
// https://youtu.be/r3pMQ8-Ad5s