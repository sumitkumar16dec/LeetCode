class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        func(0, temp, ans, s);
        return ans;
    }

    void func(int ind, vector<string> &temp, vector<vector<string>> &ans, string s){
        if(ind==s.size()){
            ans.push_back(temp);
            return;
        }

        for(int i=ind; i<s.size(); i++){
            if(isPalindrome(ind, i, s)){
                temp.push_back(s.substr(ind,i-ind+1));
                func(i+1, temp, ans, s);
                temp.pop_back();
            }
        }
    }

    bool isPalindrome(int st, int en, string s){
        while(st<=en){
            if(s[st++]!=s[en--]) return false;
        }
        return true;
    }
};
// TC: O(n * 2^n)
// SC: O(n * k) where k is no. of combinations
// https://youtu.be/WBgsABoClE0