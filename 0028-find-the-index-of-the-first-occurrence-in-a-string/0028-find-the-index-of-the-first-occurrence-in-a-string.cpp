class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1= haystack.size(), n2= needle.size();
        if(n2>n1) return -1;

        int i=0, j=0, start=0;
        while(i<n1 && j<n2){
            if(haystack[i]==needle[j]){
                if(i-start+1==n2) return start;
                i++; j++;
            }
            else{
                j=0;
                start++;
                i=start;
            }
        }
        return -1;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/v3zdhmdrasE