class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;                   // SC: O(n)
        int n= nums.size();
        temp.push_back(nums[0]);
        for(int i=1;i<n;i++){               // O(n)
            if(nums[i] > temp.back()){
                temp.push_back(nums[i]);
            }
            else{
                int ind= lower_bound(temp.begin(), temp.end(), nums[i])-temp.begin();   // O(logn)
                temp[ind]=nums[i];
            }
        }
        return temp.size();
    }
};
// TC: O(nlogn), SC: O(n)
// https://youtu.be/on2hvxBXJH4