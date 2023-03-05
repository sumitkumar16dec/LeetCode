//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int nums1[], int nums2[], int n1, int n2, int k)
    {
        if(n2<n1) return kthElement(nums2, nums1, n2, n1, k);

        int low=max(0,k-n2), high=min(n1,k);    // edge cases
        while(low<=high){       // O(log min(n1,n2))
            int cut1= (low+high)>>1;
            int cut2= k - cut1;

            int left1=  cut1==0 ? INT_MIN : nums1[cut1-1];
            int left2=  cut2==0 ? INT_MIN : nums2[cut2-1];

            int right1=  cut1==n1 ? INT_MAX : nums1[cut1];
            int right2=  cut2==n2 ? INT_MAX : nums2[cut2];

            if(left1<=right2 && left2<=right1){
                return max(left1, left2);
            }
            else if(left1>right2) high= cut1-1;
            else low= cut1+1;
        }
        return 0;
    }
};
// TC: O(log min(n1,n2)), SC: O(1)
// https://youtu.be/nv7F4PiLUzo


//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends