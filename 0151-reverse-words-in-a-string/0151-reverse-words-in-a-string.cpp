class Solution {
public:
    string reverseWords(string s) {
        string ans;             // SC: O(n)
        int i=0, n=s.size();
        while(i<n){             // O(n)
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;

            int j=i+1;
            while(j<n && s[j]!=' ') j++;
            string sub= s.substr(i, j-i);

            if(ans.size()==0) ans= sub;
            else ans= sub+' '+ans;
            i=j+1;
        }
        return ans;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/vhnRAaJybpA