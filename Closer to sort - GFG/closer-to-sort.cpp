// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    // arr[]: input array
    // n: size of array
    // x: element to find index
    //Function to find index of element x in the array if it is present.
    int closer(int arr[],int n, int x)
    {
        
        int start=0, end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==x) return mid;
            else if(arr[mid-1]==x) return mid-1;
            else if(arr[mid+1]==x) return mid+1;
            
            else if(arr[mid]>x) end=mid-2;   // go to left
            else if(arr[mid]<x) start=mid+2;   // go to right
        }
        return -1;
        
    }                   // Binary search used. So, TC = O(logn)
};


// { Driver Code Starts.

int main() {
    
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	  
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x;
	    cin >> x;
	    Solution obj;
	    int res = obj.closer(arr,n,x);
	    
	    cout << res << endl;
	}
	
	return 0;
}  // } Driver Code Ends