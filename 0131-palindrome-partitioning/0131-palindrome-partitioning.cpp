class Solution {
private:
    bool isPalindrome(int start, int end, string s){
        while(start <= end){
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }

    void func(int ind, vector<string> &ds, string s, vector<vector<string>> &ans){
        // base
        if(ind==s.size()){
            ans.push_back(ds);
            return;
        }

        for(int i=ind;i<s.size();i++){
            if(isPalindrome(ind, i, s)){
                ds.push_back(s.substr(ind, i-ind+1));
                func(i+1, ds, s, ans);
                ds.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        func(0, ds, s, ans);
        return ans;
    }
};
// TC: O(n * 2^n)
// SC: O(n * k) where k is no. of combinations
// https://youtu.be/WBgsABoClE0