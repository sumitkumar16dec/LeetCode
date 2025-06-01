class Solution {
private:
    void func(int ind, vector<int> &candidates, int target, vector<int> &temp, vector<vector<int>> &ans){
        if(target==0){
            ans.push_back(temp);
            return;
        }

        for(int i=ind;i<candidates.size();i++){
            if(i>ind && candidates[i]==candidates[i-1]) continue;

            if(candidates[i]>target) break;
            temp.push_back(candidates[i]);
            func(i+1, candidates, target-candidates[i], temp, ans);
            temp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        func(0, candidates, target, temp, ans);
        return ans;
    }
};
// TC: O(2^n * k) where k is average size of each combination(i.e, ds)
// SC: O(x * k) where x is the total number of combinations
// https://youtu.be/G1fRTGRxXU8