class Solution {
private:
    bool isPalindrome(int st, int en, string s){
        while(st<en){
            if(s[st++]!=s[en--]) return false;
        }
        return true;
    }

    void func(int ind, vector<string> &arr, vector<vector<string>> &ans, string s){
        if(ind==s.size()){
            ans.push_back(arr);
            return;
        }

        for(int i=ind;i<s.size();i++){
            if(isPalindrome(ind, i, s)){
                arr.push_back(s.substr(ind, i-ind+1));
                func(i+1, arr, ans, s);
                arr.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> arr;
        func(0, arr, ans, s);
        return ans;
    }
};
// TC: O(n * 2^n)
// SC: O(n * k) where k is no. of combinations
// https://youtu.be/WBgsABoClE0