class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;        // O(n)
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size()-2;i++){                   // O(n)
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int lo= i+1, hi= nums.size()-1;
                while(lo<hi){                               // O(n)
                    if(nums[lo]+nums[hi] == 0-nums[i]){
                        vector<int> res;
                        res.push_back(nums[i]);
                        res.push_back(nums[lo]);
                        res.push_back(nums[hi]);
                        ans.push_back(res);
                        
                        while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                        while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                        lo++; hi--;
                    }
                    else if( (nums[lo]+nums[hi]) < 0-nums[i] ) lo++;
                    else hi--;
                }
            }
        }
        
        return ans;
    }
};
// TC: O(n*n), SC: O(n)
// https://youtu.be/onLoX6Nhvmg