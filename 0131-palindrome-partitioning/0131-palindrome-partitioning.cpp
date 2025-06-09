class Solution {
private:
    bool isPalindrome(int st, int en, string s){
        while(s[st++]!=s[en--]) return false;
        return true;
    }

    void func(int ind, string s, vector<string> &temp, vector<vector<string>> &ans){
        if(ind==s.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(ind, i, s)){
                temp.push_back(s.substr(ind, i-ind+1));
                func(i+1, s, temp, ans);
                temp.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        func(0, s, temp, ans);
        return ans;
    }
};
// TC: O(n * 2^n)
// SC: O(n * k) where k is no. of combinations
// https://youtu.be/WBgsABoClE0