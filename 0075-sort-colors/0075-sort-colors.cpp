class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int s=0, e=n-1, i=0;
        while(i<=e){
            if(nums[i]==0){
                swap(nums[s],nums[i]);
                s++;
                i++;
            }
            else if(nums[i]==1) i++;
            else{
                swap(nums[e],nums[i]);
                e--;
            }
        }
    }
};
// TC: O(n) , SC: O(1)
// https://youtu.be/oaVa-9wmpns