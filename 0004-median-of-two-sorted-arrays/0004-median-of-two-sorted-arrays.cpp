class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size(), n2= nums2.size();
        if(n1>n2) return findMedianSortedArrays(nums2, nums1);
        int l=0, h=n1, left= (n1+n2+1)/2;
        
        while(l<=h){
            int mid1= (l+h)>>1;
            int mid2= left-mid1;

            int l1= INT_MIN, l2= INT_MIN, r1= INT_MAX, r2= INT_MAX;
            if(mid1-1 >= 0) l1= nums1[mid1-1];
            if(mid2-1 >= 0) l2= nums2[mid2-1];
            if(mid1<n1) r1= nums1[mid1];
            if(mid2<n2) r2= nums2[mid2];

            if(l1<=r2 && l2<=r1){
                if((n1+n2)%2==0) return (double)(max(l1,l2)+min(r1,r2))/2.0;
                else return max(l1,l2);
            }
            else if(l1>r2) h=mid1-1;
            else if(l2>r1) l=mid1+1;
        }
        return 0;
    }
};
// TC: O(log min(n1,n2)), SC: O(1)
// https://youtu.be/F9c7LpRZWVQ