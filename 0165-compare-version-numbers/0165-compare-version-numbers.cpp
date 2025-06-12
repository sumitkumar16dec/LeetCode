class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n1= version1.size(), n2= version2.size(), i=0, j=0;
        while(i<n1 || j<n2){
            long s1=0, s2=0;
            while(i<n1 && version1[i]!='.'){
                s1 = s1*10 + version1[i]-'0';
                i++;
            }

            while(j<n2 && version2[j]!='.'){
                s2 = s2*10 + version2[j]-'0';
                j++;
            }

            if(s1<s2) return -1;
            else if(s1>s2) return 1;
            else{
                i++;
                j++;
            }
        }
        return 0;
    }
};
// TC: O(m+n), SC: O(1)
// https://youtu.be/Z4Af1_t7wzk