class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int n= g.size(), m= s.size();
        int l= 0       , r= 0;
        while(l<n && r<m){
            if(s[r] >= g[l]) {r++; l++;}
            else r++;
        }
        return l;
    }
};
// TC: O(mlogm + nlogn + min(m,n)), SC: O(1)
// https://www.youtube.com/watch?v=DIX2p7vb9co