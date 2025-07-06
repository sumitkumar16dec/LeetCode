class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n= mat.size();
        int m= mat[0].size();
        int row=0, maxCnt=0;

        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1) cnt++;
            }
            if(cnt>maxCnt){
                maxCnt= cnt;
                row= i;
            }
        }
        return {row,maxCnt};
    }
};
// TC: O(n*m), SC: O(1)