class Solution {
public:
    string clearDigits(string s) {
        string ans= "";
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                ans+=s[i];
            }
            else{
                ans.pop_back();
            }
        }
        return ans;
    }
};
// TC: O(n), SC: O(1)
// most voted