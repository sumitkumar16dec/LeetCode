class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s= "11";
        for(int i=3;i<=n;i++){              // O(n)
            s += "$";
            string t = "";
            int c=1;
            for(int j=1;j<s.size();j++){    // O(m)     
                if(s[j]==s[j-1]) c++;
                else{
                    t += to_string(c);
                    t += s[j-1];
                    c=1;
                }
            }
            s= t;
        }
        return s;
    }
};
// TC: O(n*m), SC: O(1)
// https://www.youtube.com/watch?v=1YUqtoT9YoE