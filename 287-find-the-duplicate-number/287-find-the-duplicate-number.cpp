class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size(); int x =-1;
        map<int,int> mp;            // SC: O(n)
        for(int i=0;i<n;i++){       // O(n)
            mp[nums[i]]++;
        }
        
        for(auto i: mp){            // O(n)
            if(i.second>1) x = i.first;
        }
        
        return x;
    }
};
// TC: O(n) , SC: O(n)