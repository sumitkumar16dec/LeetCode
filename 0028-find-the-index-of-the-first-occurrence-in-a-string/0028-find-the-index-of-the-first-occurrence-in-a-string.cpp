class Solution {
public:
    int strStr(string haystack, string needle) {
        int n= haystack.size(), m= needle.size(), i=0, j=0, start=0;
        while(i<n && j<m){
            if(haystack[i]==needle[j]){
                i++;
                j++;
                if(j==m) return start;
            }
            else{
                start++;
                i= start;
                j= 0;
            }
        }
        return start;
    }
};