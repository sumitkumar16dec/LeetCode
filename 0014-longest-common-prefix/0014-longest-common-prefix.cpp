class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(i>strs[j].size() || strs[0][i]!=strs[j][i]) return s;
            }
            s+=strs[0][i];
        }
        return s;
    }
};
// TC: O(m*n), SC: O(m)
// https://youtu.be/VTr3Nh7BadI