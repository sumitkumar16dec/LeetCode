class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=m+n-1, i=m-1, j=n-1;
        while(j>=0){
            if(i>=0 && nums1[i]>=nums2[j]) nums1[p--]=nums1[i--];
            else nums1[p--]=nums2[j--];
        }
    }
};
// TC: O(m+n) , SC: O(1)
// https://youtu.be/C4oBXLr3zos