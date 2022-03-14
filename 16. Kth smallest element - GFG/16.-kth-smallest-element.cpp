// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        
       int m=INT_MIN;
       for(int i=0;i<n;i++){
           m=max(arr[i],m);
       }
       
       int b[m+1]={0};
       for(int i=0;i<n;i++){
           b[arr[i]]++;
       }
       
       int ans;
       for(int i=0;i<=m;i++){
           k=k-b[i];
           if(k<=0){
               ans=i;
               break;
           }
       }
       return ans;
        
    }
};


// { Driver Code Starts.
int main(){
	
	int t;
	cin >> t;
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    
	    for(int i = 0; i<n; ++i)
	        cin>>arr[i];
	        
	    Solution ob;
	    cout << ob.kthSmallest(arr, n, k) << endl;
	    
	}
	return 0;
}  // } Driver Code Ends