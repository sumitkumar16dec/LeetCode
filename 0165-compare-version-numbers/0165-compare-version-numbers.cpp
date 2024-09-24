class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0, j=0;
        while(i<version1.size() || j<version2.size()){
            long long n1= 0, n2= 0;
            while(i<version1.size() && version1[i]!='.'){
                n1= n1*10 + version1[i]-'0';
                i++;
            }
            
            while(j<version2.size() && version2[j]!='.'){
                n2= n2*10 + version2[j]-'0';
                j++;
            }

            if(n1>n2) return 1;
            else if(n1<n2) return -1;
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