// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        sort(arr,arr+n);                     // O(nlogn)
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++){              // O(n)
            mini=min(arr[i+1]-arr[i],mini);
        }
        return mini;
    }
};                     // Overall: O(nlogn)+O(n) = O(logn)

// { Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n]; 
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int diff = ob.MinimumDifference(arr, n);
	    cout << diff << endl;
	}
	return 0;
}  // } Driver Code Ends