class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low=0, mid=0, high=n-1;
        for(int i=0;i<n;i++){                   // O(n)
            if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++; mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
        }
    }
};
// TC: O(n) , SC: O(1)
// https://youtu.be/oaVa-9wmpns