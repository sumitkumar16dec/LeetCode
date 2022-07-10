// { Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 // } Driver Code Ends
// Complete this function
long long int count(long long int n)
{
	long long int table[n+1],i; // table[i] will store count of solutions for value i.
	memset(table, 0, sizeof(table));
	table[0]=1;                 // If 0 sum is required number of ways is 1.
	
	for(int i=3; i<=n; i++){
	    table[i] += table[i-3];
	}
	
	for(int i=5; i<=n; i++){
	    table[i] += table[i-5];
	}
	
	for(int i=10; i<=n; i++){
	    table[i] += table[i-10];
	}
	
	return table[n];
}
// https://www.youtube.com/watch?v=4CcZQx82JBc
// { Driver Code Starts.



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends