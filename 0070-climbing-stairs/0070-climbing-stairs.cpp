class Solution {
public:
    int climbStairs(int n) {
        int prev2= 1, prev= 1;
        for(int i=2;i<=n;i++){
            int cur= prev+prev2;

            prev2= prev;
            prev= cur;
        }
        return prev;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/mLfjzJsN8us