class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int left= target-nums[i];
            if(mp.find(left) != mp.end()) return {i, mp[left]};
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
// TC: O(n) , SC: O(n)
// https://youtu.be/dRUpbt8vHpo