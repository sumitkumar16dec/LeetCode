class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX, maxPro=0;
        for(int i=0;i<prices.size();i++){               // O(n)
            minPrice = min(minPrice,prices[i]);
            maxPro = max(maxPro, prices[i]-minPrice);
        }
        
        return maxPro;
    }
};
// TC: O(1) , SC: O(1)
// https://youtu.be/eMSfBgbiEjk