class Solution {
private:
    void func(int ind, vector<int> &nums, vector<vector<int>> &ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=ind;i<nums.size();i++){
            swap(nums[i], nums[ind]);
            func(ind+1, nums, ans);
            swap(nums[ind], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        func(0, nums, ans);
        return ans;
    }
};
// TC: O(n! * n), SC: O(n) [recursion]
// https://youtu.be/f2ic2Rsc9pU