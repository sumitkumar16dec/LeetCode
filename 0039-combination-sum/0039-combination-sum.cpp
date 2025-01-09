class Solution {
public:
    void func(int ind, vector<int> &candidates, int target, vector<int> &arr, vector<vector<int>> &ans){
        if(ind==candidates.size()){
            if(target==0)ans.push_back(arr);
            return;
        }

        // pick
        if(candidates[ind]<=target){
            arr.push_back(candidates[ind]);
            func(ind, candidates, target-candidates[ind], arr, ans);
            arr.pop_back();
        }

        // not pick
        func(ind+1, candidates, target, arr, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(candidates.begin(), candidates.end());
        func(0, candidates, target, arr, ans);
        return ans;
    }
};
// TC: O(2^target * k), k->avg size of each combination(i.e, ds)
// SC: O(x * k) where x is the total number of combinations
// https://youtu.be/OyZFFqQtu98