class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r=height.size()-1, leftmax=0, rightmax=0, ans=0;
        while(l<r){
            if(height[l]<=height[r]){
                leftmax= max(leftmax, height[l]);
                ans += (leftmax-height[l]);
                l++;
            }
            else{
                rightmax= max(rightmax, height[r]);
                ans+= (rightmax-height[r]);
                r--;
            }
        }
        return ans;
    }
};
// TC: O(n), SC: O(1)
// https://youtu.be/m18Hntz4go8