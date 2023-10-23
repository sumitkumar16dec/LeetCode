class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());  // O(nlogn)
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){           // O(n^2)
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1, k=n-1;
            int left= 0-nums[i];
            while(j<k){
                if((nums[j]+nums[k])<left) j++;
                else if((nums[j]+nums[k])>left) k--;
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