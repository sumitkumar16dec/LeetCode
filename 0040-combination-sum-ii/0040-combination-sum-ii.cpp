class Solution {
private:
    void func(int ind, vector<int> arr, vector<vector<int>> &ans, vector<int> candidates, int target){
        if(target==0){
            ans.push_back(arr);
            return;
        }

        for(int i=ind;i<candidates.size();i++){
            if(i>ind && candidates[i]==candidates[i-1]) continue;

            if(candidates[i]>target) break;
            arr.push_back(candidates[i]);
            func(i+1, arr, ans, candidates, target-candidates[i]);
            arr.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(candidates.begin(), candidates.end());
        func(0, arr, ans, candidates, target);
        return ans;
    }
};
// TC: O(2^n * k) where k is average size of each combination(i.e, ds)
// SC: O(x * k) where x is the total number of combinations
// https://youtu.be/G1fRTGRxXU8