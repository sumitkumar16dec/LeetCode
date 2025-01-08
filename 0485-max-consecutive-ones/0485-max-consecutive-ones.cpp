class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0, c=0;
        for(int i: nums){
            if(i==1) c++;
            else c=0;
            maxi= max(maxi,c);
        }
        return maxi;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/Mo33MjjMlyA