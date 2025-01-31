class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s= "11";
        
        for(int i=3;i<=n;i++){
            s=s+'$';
            int c=1;
            string temp= "";
            for(int j=1;j<s.size();j++){
                if(s[j]==s[j-1]) c++;
                else{
                    temp+=to_string(c)+s[j-1];
                    c=1;
                }
            }
            s= temp;
        }
        return s;
    }
};
// TC: O(n*m), SC: O(1)
// https://www.youtube.com/watch?v=1YUqtoT9YoE