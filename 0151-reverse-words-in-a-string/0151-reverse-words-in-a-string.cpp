class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int i=0, n= s.size();
        while(i<n){
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            int j=i+1;
            while(j<n && s[j]!=' ') j++;
            string temp= s.substr(i, j-i);
            if(ans.size()==0) ans=temp;
            else ans= temp+' '+ans;
            i=j++;
        }

        return ans;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/vhnRAaJybpA