class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); // O(nlogn)
        int n= nums.size();
        for(int i=0;i<n;i++){           // O(n)
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1, k=n-1;
            long left= 0-nums[i];
            while(j<k){                 // O(n)
                if(nums[j]+nums[k] < left) j++;
                else if(nums[j]+nums[k] > left) k--;
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++; k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};
// TC: O(nlogn + n^2), SC: O(no. of unique triplets)
// https://youtu.be/DhFh8Kw7ymk