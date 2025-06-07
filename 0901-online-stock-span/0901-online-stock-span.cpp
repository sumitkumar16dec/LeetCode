class StockSpanner {
public:
    stack<pair<int,int>> st;
    int ind;
    StockSpanner() {
        while(!st.empty()) st.pop();
        ind=-1;
    }
    
    int next(int price) {
        ind= ind+1;
        while(!st.empty() && st.top().first <= price) st.pop(); 
        int ans= ind - (st.empty()? -1 : st.top().second);

        st.push({price,ind});
        return ans;
    }
};
// TC: O(2n), SC: O(n)
// https://www.youtube.com/watch?v=eay-zoSRkVc

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */