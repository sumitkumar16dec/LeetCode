class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore Voting Algorithm
        int count=0;
        int maj=0;
        for(int i : nums){          // O(n)
            if(count==0) {maj=i; count++;}
            else if(i==maj) count++;
            else count--;
        }
        return maj;
    }
};
// TC: O(n) , SC: O(1)
// https://youtu.be/AoX3BPWNnoE