class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans(n);     // SC: O(n^2)
        for(int i=0;i<n;i++){           // O(n)
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            for(int j=1;j<i;j++){       // O(n)
                ans[i][j]= ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }
};
// TC: O(n^2), SC: O(n^2)
// https://youtu.be/6FLvhQjZqvM