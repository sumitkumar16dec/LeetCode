class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), ind1=-1, ind2=-1;
        //Step 1: finding the breakthrough point,i.e, ind1
        for(int i=n-2;i>=0;i--){                            // O(n)
            if(nums[i]<nums[i+1]) {ind1=i; break;}
        }
        
        if(ind1==-1){
            // Step 4: reverse
            reverse(nums.begin(),nums.end());
        }
        else{
            //Step 2: finding ind2, from which ind1 is to be swapped
            for(int i=n-1;i>=0;i--){                                    // O(n)
                if(nums[i]>nums[ind1]) {ind2=i; break;}
            }
            
            //Step 3: swap value at ind1 with value at ind2
            swap(nums[ind1], nums[ind2]);                               // O(1)
            
            //Step 4: reverse array from index ind1+1 to last index
            reverse(nums.begin()+ind1+1, nums.end());  // can write reverse stl code using 2 pointers method    // O(n)
        }
    }
};
// TC: O(n+n+n) = O(n) , SC: O(1)
// https://youtu.be/LuLCLgMElus