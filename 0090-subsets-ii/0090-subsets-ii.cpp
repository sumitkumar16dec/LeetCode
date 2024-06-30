class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> arr;
        func(0, ans, arr, nums);
        return ans;
    }

    void func(int ind, vector<vector<int>> &ans, vector<int> &arr, vector<int> &nums){
        ans.push_back(arr);

        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;

            arr.push_back(nums[i]);
            func(i+1, ans, arr, nums);
            arr.pop_back();
        }
    }
};
// TC: O(2^n * k)
// SC: O(2^n * k) to store every subset of average length k.
// AS: O(n), n->depth of recursion tree
// https://youtu.be/RIn3gOkbhQE