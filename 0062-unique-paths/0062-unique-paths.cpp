class Solution {
public:
    int uniquePaths(int m, int n) {
        double ans=1.0;
        int N=m+n-2;
        int r=m-1;
        for(int i=1;i<=r;i++){
            ans = (ans*(N-r+i))/i;
        }
        return (int)ans;
    }
};
// TC: O(m-1), SC: O(1)
// https://youtu.be/t_f0nwwdg5o