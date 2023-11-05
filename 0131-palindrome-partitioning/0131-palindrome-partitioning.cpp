class Solution {
private:
    bool isPalindrome(string s, int st, int en){
        while(st<=en){
            if(s[st++]!=s[en--]) return false;
        }
        return true;
    }

    void func(int ind, string s, vector<string> &ds, vector<vector<string>> &ans){
        if(ind==s.size()) ans.push_back(ds);

        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s, ind, i)){
                ds.push_back(s.substr(ind, i-ind+1));
                func(i+1, s, ds, ans);
                ds.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        func(0, s, ds, ans);
        return ans;
    }
};
// TC: O(n * 2^n)
// SC: O(n * k) where k is no. of combinations
// https://youtu.be/WBgsABoClE0