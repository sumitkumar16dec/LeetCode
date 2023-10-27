class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(365, -1);
        int left=0, right=0, len=0, n=s.size();
        while(right<n){     // O(n)
            if(mp[s[right]]!=-1) left= max(left,mp[s[right]]+1);
            mp[s[right]]=right;

            len= max(len, right-left+1);

            right++;
        }
        return len;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/qtVh-XEpsJo