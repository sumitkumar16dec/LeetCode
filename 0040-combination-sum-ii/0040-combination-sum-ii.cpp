class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> temp;
        func(0, temp, arr, target, ans);
        return ans;
    }

    void func(int ind, vector<int> &temp, vector<int> &arr, int target, vector<vector<int>> &ans){
        if(target==0){
            ans.push_back(temp);
            return;
        }

        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;

            if(arr[i] > target) break;

            if(arr[i]<=target){
                temp.push_back(arr[i]);
                func(i+1, temp, arr, target-arr[i], ans);
                temp.pop_back();
            }
        }
    }
};
// TC: O(2^n * k) where k is average size of each combination(i.e, ds)
// SC: O(x * k) where x is the total number of combinations
// https://youtu.be/G1fRTGRxXU8