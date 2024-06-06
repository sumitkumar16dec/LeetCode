class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0, right=0, n=s.size(), len=0;
        vector<int> mp(365, -1);
        while(right<n){
            if(mp[s[right]]!=-1) left= max(left, mp[s[right]]+1);

            mp[s[right]]= right;

            len= max(len, right-left+1);
            right++;
        }
        return len;
    }
};
// TC: O(n), SC: O(365)
// https://youtu.be/qtVh-XEpsJo