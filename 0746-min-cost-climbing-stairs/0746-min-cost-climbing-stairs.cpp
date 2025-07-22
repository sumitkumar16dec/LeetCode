class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        int prev2=cost[0], prev=cost[1], cur=0;
        for(int i=2;i<n;i++){
            cur= cost[i] + min(prev, prev2);
            prev2= prev;
            prev= cur;
        }
        return min(prev, prev2);
    }
};
// TC: O(n), SC: O(1)
// https://leetcode.com/problems/min-cost-climbing-stairs/solutions/476388/4-ways-step-by-step-from-recursion-top-down-dp-bottom-up-dp-fine-tuning