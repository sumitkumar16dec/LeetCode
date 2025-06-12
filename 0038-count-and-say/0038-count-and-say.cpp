class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        
        string s= "1";
        for(int i=2;i<=n;i++){
            s+= "$";
            int cnt=1;
            string temp = "";
            for(int j=1;j<s.size();j++){
                if(s[j]==s[j-1]) cnt++;
                else{
                    temp += to_string(cnt) + s[j-1];
                    cnt = 1;
                }
            }
            s= temp;
        }
        return s;
    }
};
// TC: O(n*m), SC: O(1)
// https://www.youtube.com/watch?v=1YUqtoT9YoE