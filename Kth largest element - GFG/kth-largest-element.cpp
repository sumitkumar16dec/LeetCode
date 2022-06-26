// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to return kth largest element from an array.
    int KthLargest(int arr[], int n, int k) {
        // Your code here
        
        priority_queue <int,vector<int>,greater<int>> minHeap;
    	for(int i = 0; i < k; i++)  minHeap.push(arr[i]);
    	for(int i = k; i < n; i++){
    		if (minHeap.top() > arr[i])
    			continue;
    		else{
    			minHeap.pop();
    			minHeap.push(arr[i]);
    		}
    	}
	
    	return minHeap.top();
    	
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.KthLargest(arr, n, k) << endl;
    }

    return 0;
}  // } Driver Code Ends