class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), right=0, left=0, len=0;
        vector<int> mp(256,-1);         // SC: O(n)
        while(right<n){                 // O(n)
            if(mp[s[right]]!=-1) left= max(left, mp[s[right]]+1);
            
            mp[s[right]]=right;
            
            len= max(len, right-left+1);
            right++;
        }
        
        return len;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/qtVh-XEpsJo