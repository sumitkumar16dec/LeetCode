class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[j]) j++;
            else j=0;
            if(j==needle.size()) return i+1-needle.size();
        }
        return -1;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/v3zdhmdrasE