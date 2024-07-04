class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        func(0, ans, nums);
        return ans;
    }

    void func(int ind, vector<vector<int>> &ans, vector<int> &nums){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=ind;i<nums.size();i++){
            swap(nums[i], nums[ind]);
            func(ind+1, ans, nums);
            swap(nums[i], nums[ind]);
        }
    }
};
// TC: O(n! * n), SC: O(n) [recursion]
// https://youtu.be/f2ic2Rsc9pU