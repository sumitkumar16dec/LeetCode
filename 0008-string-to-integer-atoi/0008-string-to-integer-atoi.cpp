class Solution {
public:
    int myAtoi(string s) {
        if(s.size()==0) return 0;
        int i=0, sign=1;
        long long sum=0;
        while(i<s.size() && s[i]==' ') i++;
        s= s.substr(i);
        
        if(s[0]=='-') sign=-1;

        i= (s[0]=='-' || s[0]=='+')? 1 : 0;
        while(i<s.size()){
            if(s[i]==' ' || !isdigit(s[i])) break;
            sum= sum*10 + s[i]-'0';

            if(sign==-1 && -1*sum<INT_MIN) return INT_MIN;
            else if(sign==1 && sum>INT_MAX) return INT_MAX;

            i++;
        }
        if(sign==-1) sum= sum*sign;
        return (int)sum;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/qZoFJKyHQ98