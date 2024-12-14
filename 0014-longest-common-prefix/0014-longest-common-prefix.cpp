class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n= strs.size();
        string temp= strs[0];
        for(int i=0;i<temp.size();i++){
            for(int j=1;j<n;j++){
                if(i>strs[j].size() || temp[i]!=strs[j][i]) return ans;
            }
            ans+= temp[i];
        }
        return ans;
    }
};
// TC: O(m*n), SC: O(m)
// https://youtu.be/VTr3Nh7BadI