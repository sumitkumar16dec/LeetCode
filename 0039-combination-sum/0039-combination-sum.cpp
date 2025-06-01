class Solution {
private:
    void func(int ind, vector<int> &temp, vector<int>& candidates, int target, vector<vector<int>> &ans){
        if(ind==candidates.size()){
            if(target==0) ans.push_back(temp);
            return;
        }

        // take
        if(candidates[ind]<=target){
            temp.push_back(candidates[ind]);
            func(ind, temp, candidates, target-candidates[ind], ans);
            temp.pop_back();
        }

        // not take
        func(ind+1, temp, candidates, target, ans);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        func(0, temp, candidates, target, ans);
        return ans;
    }
};
// TC: O(2^target * k), k->avg size of each combination(i.e, ds)
// SC: O(x * k) where x is the total number of combinations
// https://youtu.be/OyZFFqQtu98