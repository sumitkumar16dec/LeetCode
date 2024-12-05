class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a= m-1, b= n-1, p= m+n-1;
        while(b>=0){
            if(a>=0 && nums1[a]>=nums2[b]) nums1[p--]=nums1[a--];
            else nums1[p--]=nums2[b--];
        }
    }
};
// TC: O(m+n) , SC: O(1)
// https://youtu.be/C4oBXLr3zos