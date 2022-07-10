// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (n == 3) return 4;
        
        long long int prev3=1, prev2=2, prev1=4, curr=0;
        for(int i=4; i<=n; i++){
            curr= (prev1 + prev2 + prev3) %1000000007;
            
            prev3= prev2;
            prev2= prev1;
            prev1= curr;
        }
        
        return prev1;
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends