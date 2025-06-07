class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size(), maxi=0, pse=-1, nse=n;
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int cur= st.top(); st.pop();
                pse= st.empty()? -1 : st.top();
                nse= i;
                maxi= max(maxi, heights[cur]*(nse-pse-1));
            }
            st.push(i);
        }

        while(!st.empty()){
            int cur= st.top(); st.pop();
            nse= n;
            pse= st.empty()? -1 : st.top();
            maxi= max(maxi, heights[cur]*(nse-pse-1));
        }
        return maxi;
    }
};
// TC: O(2n) (n for for-loop & n for push-pop for n elements), SC: O(1)
// https://www.youtube.com/watch?v=Bzat9vgD0fs