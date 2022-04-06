// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){          // O(n)
	        m[arr[i]]++;
	    }
	    for(auto i=m.begin();i!=m.end();i++){         // O(n)
	        int key = i->first;
	        int value = i->second;
	        int pair = x-key;
	        if(pair==key){
	            if(value>1) return true;
	        }
	        else{
	            if(m.find(pair)!=m.end()) return true;
	        }
	    }
	    return false;
	    
	}  // Overall TC: O(n) + O(n) =O(n)
};     // https://www.youtube.com/watch?v=7xx1YcXXEYU&t=755s 

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
  // } Driver Code Ends