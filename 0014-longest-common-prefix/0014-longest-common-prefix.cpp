class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size(), m=strs[0].size();
        string ans="";
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                if(i>strs[j].size() || strs[0][i]!=strs[j][i]) return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};
// TC: O(m*n), SC: O(m)
// https://youtu.be/VTr3Nh7BadI