class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;

                int k=j+1, l=n-1;
                long left= target-nums[i];
                left -= nums[j];
                while(k<l){
                    if(nums[k]+nums[l]<left) k++;
                    else if(nums[k]+nums[l]>left) l--;
                    else{
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++; l--;

                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                }
            }
        }
        return ans;
    }
};
// TC: O(n^3), SC: O(no. of quads)
// https://youtu.be/eD95WRfh81c