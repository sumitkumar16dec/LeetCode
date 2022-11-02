class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low= 0, i=0, high= nums.size()-1;
        while(i<=high){         // O(n)
            if(nums[i]==0){
                swap(nums[i], nums[low]);
                low++; i++;
            }
            else if(nums[i]==1) i++;
            else if(nums[i]==2){
                swap(nums[i], nums[high]);
                high--;
            }
        }
    }
};
// TC: O(n) , SC: O(1)
// https://youtu.be/oaVa-9wmpns