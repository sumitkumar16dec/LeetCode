class Solution {
public:
    int myAtoi(string s) {
        long n = s.size(), i = 0, sign=1, ans=0;
        while(i<n && s[i]==' ') i++;
        if(i<n && s[i]=='-') {sign=-1; i++;}
        else if(i<n && s[i]=='+') i++;
        while(i<n && s[i]=='0') i++;
        while(i<n && s[i]>='1' && s[i]<='9'){
            ans = ans*10 + s[i]-'0';
            if(ans>INT_MAX){
                if(sign==1) return INT_MAX;
                else return INT_MIN;
            }
            i++;
        }
        return (sign==-1) ? (ans*-1) : ans;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/qZoFJKyHQ98