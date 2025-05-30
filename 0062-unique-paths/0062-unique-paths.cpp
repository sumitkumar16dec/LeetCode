class Solution {
public:
    int uniquePaths(int m, int n) {
        int r= m-1, N=m-1+n-1, ans=1;
        // Now calculate NCr
        for(int i=1;i<=r;i++){
            ans= (ans*(N-r+i))/i;
        }
        return ans;
    }
};
// TC: O(m-1), SC: O(1)
// https://youtu.be/t_f0nwwdg5o