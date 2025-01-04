class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj= -1, c=0;
        for(int i: nums){
            if(i==maj) c++;
            else if(c==0) maj=i;
            else c--;
        }
        return maj;
    }
};
// TC: O(n) , SC: O(1)
// https://youtu.be/AoX3BPWNnoE
// Moore Voting Algo