class Solution {
private:
    void func(int ind, vector<int> candidates, int target, vector<int> &ds, vector<vector<int>> &ans){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }

        // pick
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            func(ind, candidates, target-candidates[ind], ds, ans);
            ds.pop_back();
        }

        // not pick
        func(ind+1, candidates, target, ds, ans);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        func(0, candidates, target, ds, ans);
        return ans;
    }
};
// TC: O(2^target * k), k->avg size of each combination(i.e, ds)
// SC: O(x * k) where x is the total number of combinations
// https://youtu.be/OyZFFqQtu98