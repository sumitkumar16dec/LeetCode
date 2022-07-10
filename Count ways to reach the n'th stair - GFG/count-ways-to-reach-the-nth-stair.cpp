// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    int fib(int n, int dp[]){
        if(n<=1) return dp[n]=1;
        if(dp[n]!=-1) return dp[n];
        
        dp[n] = fib(n-1, dp)%1000000007 + fib(n-2, dp)%1000000007;
        return dp[n]%1000000007;
    }
    
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        int dp[n+1];
        memset(dp, -1, sizeof dp);
        fib(n, dp)%1000000007;
        return dp[n]%1000000007;
    }
};
// https://www.youtube.com/watch?v=tyB0ztf0DNY&list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY&index=2&t=530s
// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends