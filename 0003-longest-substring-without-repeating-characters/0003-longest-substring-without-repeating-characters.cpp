class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(365,-1);
        int n= s.size(), l=0, r=0, len=0;
        while(r<n){
            if(mp[s[r]] != -1) l= max(l, mp[s[r]]+1);
            mp[s[r]] = r;
            len = max(len,r-l+1);
            r++;
        }
        return len;
    }
};
// TC: O(n), SC: O(365)
// https://youtu.be/qtVh-XEpsJo