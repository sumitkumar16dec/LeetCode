class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1= haystack.size(), n2= needle.size();
        if(n2>n1) return -1;
        int i=0, j=0, start=0;
        while(i<n1){
            if(haystack[i]==needle[j]){
                i++; j++;
                if(j==n2) return start;
            }
            else{
                start++;
                i= start;
                j=0;
            }
        }
        return -1;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/v3zdhmdrasE