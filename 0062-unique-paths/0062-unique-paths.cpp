class Solution {
public:
    int uniquePaths(int m, int n) {
        int N= m+n-2, r=m-1, ans=1;
        for(int i=1;i<=r;i++){
            ans= (ans*(N-r+i))/i;
        }
        return ans;
    }
};
// TC: O(m-1), SC: O(1)
// https://youtu.be/t_f0nwwdg5o