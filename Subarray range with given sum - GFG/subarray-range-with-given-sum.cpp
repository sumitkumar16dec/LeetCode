// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        
        int count=0;
        unordered_map<int,int> m;         // O(n)
        int add=0;
        
        for(int i=0;i<n;i++){             // O(n)
            add+=arr[i];
            if(add==sum) count++;
            if(m.find(add-sum)!=m.end()) count+=m[add-sum];
            m[add]++;
        }
        return count;
        
    }    // Overall AS: O(n),  TC: O(n)
};  // https://www.geeksforgeeks.org/number-subarrays-sum-exactly-equal-k/

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends