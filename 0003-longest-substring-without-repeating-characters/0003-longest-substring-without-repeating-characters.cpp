class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size()-1, l=0, r=0, len=0;
        vector<int> mp(365,-1);
        while(r<=n){
            if(mp[s[r]]!=-1) l= max(l,mp[s[r]]+1);
            mp[s[r]]=r;

            len= max(len, r-l+1);
            r++;
        }
        return len;
    }
};
// TC: O(n), SC: O(365)
// https://youtu.be/qtVh-XEpsJo