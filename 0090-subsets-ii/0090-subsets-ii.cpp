class Solution {
private:
    void func(int ind, vector<int> &arr, vector<vector<int>> &ans, vector<int> nums){
        ans.push_back(arr);

        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;

            arr.push_back(nums[i]);
            func(i+1, arr, ans, nums);
            arr.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(nums.begin(), nums.end());
        func(0, arr, ans, nums);
        return ans;
    }
};
// TC: O(2^n * k)
// SC: O(2^n * k) to store every subset of average length k.
// AS: O(n), n->depth of recursion tree
// https://youtu.be/RIn3gOkbhQE