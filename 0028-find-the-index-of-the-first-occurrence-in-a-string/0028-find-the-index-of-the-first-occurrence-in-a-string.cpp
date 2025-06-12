class Solution {
public:
    int strStr(string haystack, string needle) {
        int start=0, i=0, j=0;
        while(i<haystack.size()){
            if(haystack[i]==needle[j]){
                i++;
                j++;
                if(j==needle.size()) return start;
            }
            else{
                start++;
                i=start;
                j=0;
            }
        }
        return -1;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/v3zdhmdrasE