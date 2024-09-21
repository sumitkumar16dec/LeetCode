class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size();
        stack<int> s;       // SC: O(n)
        int maxA= 0;
        for(int i=0;i<=n;i++){      // O(n+n)
            while(!s.empty() && (i==n || heights[s.top()]>=heights[i])){
                int height= heights[s.top()];
                s.pop();

                int width;
                if(s.empty()) width= i;
                else width= i-s.top()-1;

                maxA= max(maxA, height*width);
            }
            s.push(i);
        }
        return maxA;
    }
};
// TC: O(n+n), SC: O(n)
// https://youtu.be/X0X6G-eWgQ8