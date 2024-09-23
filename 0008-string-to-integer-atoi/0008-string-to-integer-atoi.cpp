class Solution {
public:
    int myAtoi(string s) {
        if(s.length()==0) return 0;

        int i=0;
        while(i<s.size() && s[i]==' ') i++;
        s= s.substr(i);

        int sign= 1;
        if(s[0]=='-') sign=-1;

        long ans= 0;
        i= (s[0]=='+' || s[0]=='-') ? 1 : 0;

        while(i < s.length()){      // O(n)
            if(s[i]==' ' || !isdigit(s[i])) break;

            ans= ans*10 + s[i]-'0';

            if(sign==-1 && -1*ans<INT_MIN) return INT_MIN;
            else if(sign==1 && ans>INT_MAX) return INT_MAX;

            i++;
        }

        return (int)(sign*ans);
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/qZoFJKyHQ98