class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r=height.size()-1, leftmax=0, rightmax=0, sum=0;
        while(l<r){
            if(height[l]<=height[r]){
                leftmax= max(leftmax, height[l]);
                sum+= (leftmax-height[l]);
                l++;
            }
            else{
                rightmax= max(rightmax, height[r]);
                sum+= (rightmax-height[r]);
                r--;
            }
        }
        return sum;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/m18Hntz4go8