class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=INT_MIN, minPri= INT_MAX;
        for(int i: prices){
            minPri= min(minPri, i);
            maxPro= max(maxPro, i-minPri);
        }
        return maxPro;
    }
};
// TC: O(n) , SC: O(1)
// https://youtu.be/eMSfBgbiEjk