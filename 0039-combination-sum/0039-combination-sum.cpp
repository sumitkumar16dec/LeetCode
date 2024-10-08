class Solution {
private:
    void func(int ind, vector<int> &arr, vector<vector<int>> &ans, vector<int> &candidates, int target){
        if(ind==candidates.size()){
            if(target==0) ans.push_back(arr);
            return;
        }
        
        // pick
        if(candidates[ind]<=target){
            arr.push_back(candidates[ind]);
            func(ind, arr, ans, candidates, target-candidates[ind]);
            arr.pop_back();
        }

        // not pick
        func(ind+1, arr, ans, candidates, target);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        func(0, arr, ans, candidates, target);
        return ans;
    }
};
// TC: O(2^target * k), k->avg size of each combination(i.e, ds)
// SC: O(x * k) where x is the total number of combinations
// https://youtu.be/OyZFFqQtu98