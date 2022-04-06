// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        
        unordered_map<int,int> m; int count=0;     // AS: O(n)
        for(int i=0;i<n;i++){                      // TC: O(n)
            m[arr[i]]++;
        }
        //for(auto x: m){                            // TC: O(n)
        //    if(x.second==1) count++;
        //}
        //   OR
        for(int i=0;i<n;i++){
            if(m[arr[i]]==1) count++;
        }
        return count;
        
    }

};  // Overall TC: O(n),   AS: O(n)

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.countNonRepeated(arr,n)<<endl;
	    
	}
	return 0;
}
  // } Driver Code Ends