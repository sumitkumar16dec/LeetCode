class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = m-1;
        double res = 1;
        
        for(int i=1;i<=r;i++){          // O(m-1)
            res = res * (N-r+i)/i;
        }
        return res;
    }
};
// TC: O(m-1) , SC: O(1)
// https://youtu.be/t_f0nwwdg5o