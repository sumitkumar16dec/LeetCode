// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        
        sort(A,A+n);                                  // O(nlogn)
        for(int i=n-1;i>=0;i--){                      // O(n)
            int l=0, r=i-1;
            while(l<r){                               // O(n)
                if(A[l]+A[r]+A[i]==X) return 1;
                else if(A[l]+A[r]+A[i]<X) l++;
                else if(A[l]+A[r]+A[i]>X) r--;
            }
        }
        return 0;
        
    }                          // Overall TC: O(nlogn)+O(n^2)=O(n^2)
};                             // Overall SC: O(1)
                // Similar ques: https://www.youtube.com/watch?v=PqEiJDdt3S4

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends