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
        
        priority_queue <int,vector<int>> maxHeap;
    	for(int i = 0; i < k; i++)  maxHeap.push(arr[i]);
    	for(int i = k; i < n; i++){
    		if (maxHeap.top() < arr[i])
    			continue;
    		else{
    			maxHeap.pop();
    			maxHeap.push(arr[i]);
    		}
    	}
	
    	return maxHeap.top();
    	
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