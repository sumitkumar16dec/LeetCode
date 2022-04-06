// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        
        for(int i=0;i<n;i++){             // TC: O(n)
            if(arr[i]==0) arr[i]=-1;
        }
        
        int count=0;
        unordered_map<int,int> m;         // AS: O(n)
        int add=0;
        
        for(int i=0;i<n;i++){             // TC: O(n)
            add+=arr[i];
            if(add==0) count++;
            if(m.find(add-0)!=m.end()) count+=m[add-0];
            m[add]++;
        }
        return count;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends