class Solution {
public:
    void func(int ind, vector<int> &nums, vector<int> &arr, vector<vector<int>> &ans){
        ans.push_back(arr);
        
        int n= nums.size();
        for(int i=ind;i<n;i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            
            arr.push_back(nums[i]);
            func(i+1, nums, arr, ans);
            arr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(nums.begin(), nums.end());
        func(0, nums, arr, ans);
        return ans;
    }
};
// TC: O(2^n * k)
// SC: O(2^n * k) to store every subset of average length k.
// AS: O(n), n->depth of recursion tree
// https://youtu.be/RIn3gOkbhQE