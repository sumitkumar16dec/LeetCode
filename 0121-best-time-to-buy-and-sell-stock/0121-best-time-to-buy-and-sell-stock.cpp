class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0, minPri=INT_MAX;
        for(int i: prices){
            minPri= min(minPri, i);
            maxPro= max(maxPro, i-minPri);
        }
        return maxPro;
    }
};