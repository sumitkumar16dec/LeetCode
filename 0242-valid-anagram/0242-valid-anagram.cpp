class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> cnt(26,0);
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            cnt[s[i]-'a']++;
            cnt[t[i]-'a']--;
        }

        for(int i: cnt){
            if(i!=0) return false;
        }
        return true;
    }
};
// TC: O(n), SC: O(26)
// editorial solution
// or, https://youtu.be/wKF6L9Zo8PQ