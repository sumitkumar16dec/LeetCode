class Solution {
private:
    void func(int ind, vector<int> &temp, vector<int> &nums, vector<vector<int>> &ans){
        ans.push_back(temp);
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            
            temp.push_back(nums[i]);
            func(i+1, temp, nums, ans);
            temp.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        func(0, temp, nums, ans);
        return ans;
    }
};
// TC: O(2^n * k)
// SC: O(2^n * k) to store every subset of average length k.
// AS: O(n), n->depth of recursion tree
// https://youtu.be/RIn3gOkbhQE