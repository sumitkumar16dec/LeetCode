class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0, h=nums.size()-2;
        while(l<=h){
            int m= (l+h)>>1;
            if(nums[m]==nums[m^1]){     // Non-duplicate is in right side
                l= m+1;
            }
            else{            // is in left side
                h= m-1;
            }
        }
        return nums[l];
    }
};
// TC: O(logn), SC: O(1)
// https://youtu.be/PzszoiY5XMQ