class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});

        int n= s.size();
        int sum= mp[s[n-1]];
        for(int i=n-2;i>=0;i--){
            if(mp[s[i]]<mp[s[i+1]]) sum-=mp[s[i]];
            else sum+=mp[s[i]];
        }
        return sum;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/dlATMslQ6Uc