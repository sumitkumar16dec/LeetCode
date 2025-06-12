class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs[0].size(), m= strs.size();
        string s= "";
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                if(i>strs[j].size()-1) return s;
                if(strs[0][i]!=strs[j][i]) return s;
            }
            s+= strs[0][i];
        }
        return s;
    }
};
// TC: O(n*m), SC: O(n)
// https://youtu.be/VTr3Nh7BadI