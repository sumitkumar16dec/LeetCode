class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0, minPrice=INT_MAX;
        for(int i=0;i<prices.size();i++){           // O(n)
            minPrice= min(minPrice, prices[i]);
            maxPro= max(maxPro, prices[i]-minPrice);
        }
        return maxPro;
    }
};
// TC: O(n) , SC: O(1)
// https://youtu.be/eMSfBgbiEjk