class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size(), ind1=-1, ind2=-1;
        // step1: find break-through point
        for(int i=n-2;i>=0;i--){                            // O(n)
            if(nums[i]<nums[i+1]) {ind1=i; break;}
        }
        
        // step2: find with which it'll be swapped
        if(ind1!=-1){
            for(int j=n-1;j>=0;j--){                        // O(n)
                if(nums[j]>nums[ind1]) {ind2=j; break;}
            }
        }
        
        // step3: swap
        if(ind1!=-1 && ind2!=-1){
            swap(nums[ind1], nums[ind2]);                   // O(1)
        }
        
        // step4: reverse
        reverse(nums.begin()+ind1+1, nums.end());       // O(n)
        
    }
};
// TC: O(n+n+n) = O(n) , SC: O(1)
// https://youtu.be/LuLCLgMElus