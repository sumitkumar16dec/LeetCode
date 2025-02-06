class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n= nums.size(), cnt=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                mp[nums[i]*nums[j]]++;
            }
        }

        for(auto it: mp){
            int freq= it.second;
            cnt+= 8*freq*(freq-1)/2;
        }
        return cnt;
    }
};
// TC: O(n^2), SC: O(n^2)
// https://youtu.be/TBCOBD-24oE