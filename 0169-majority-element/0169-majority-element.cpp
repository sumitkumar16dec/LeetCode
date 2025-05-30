class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj=-1, c=0;
        for(int i: nums){
            if(c==0) {maj=i; c++;}
            else if(i!=maj) c--;
            else c++;
        }
        return maj;
    }
};
// TC: O(n) , SC: O(1)
// https://youtu.be/AoX3BPWNnoE
// Moore Voting Algo