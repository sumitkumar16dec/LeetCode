class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(int i=0;i<mp.size();i++){
            if(mp[i]!=0) return false;
        }
        return true;
    }
};
// TC: O(n), SC: O(n)
// editorial solution
// or, https://youtu.be/wKF6L9Zo8PQ