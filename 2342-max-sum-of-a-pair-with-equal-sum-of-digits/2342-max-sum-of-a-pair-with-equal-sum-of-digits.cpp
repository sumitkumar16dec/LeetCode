class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int maxForSum[82]= {0};
        int res=-1;
        for(int i: nums){
            int temp= i, sum=0;
            while(temp>0){
                sum+= temp%10;
                temp/= 10;
            }

            if(maxForSum[sum]>0){
                res= max(res, i+maxForSum[sum]);
            }
            maxForSum[sum]= max(maxForSum[sum], i);
        }
        return res;
    }
};
// TC: O(n), SC: O(1)
// LC section