class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int maj1=-1, maj2=-1, c1=0, c2=0;
        for(int i: nums){
            if(i==maj1) c1++;
            else if(i==maj2) c2++;
            else if(c1==0) {maj1=i; c1++;}
            else if(c2==0) {maj2=i; c2++;}
            else {c1--; c2--;}
        }

        c1=0, c2=0;
        for(int i: nums){
            if(i==maj1) c1++;
            else if(i==maj2) c2++;
        }
        if(c1>nums.size()/3) {ans.push_back(maj1);}
        if(c2>nums.size()/3) {ans.push_back(maj2);}

        return ans;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/yDbkQd9t2ig