// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    // int fib(int n, int dp[]){
    //     if(n<=1) return dp[n]=1;
    //     if(dp[n]!=-1) return dp[n];
        
    //     dp[n] = fib(n-1, dp)%1000000007 + fib(n-2, dp)%1000000007;
    //     return dp[n]%1000000007;
    // }
    
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        if(n<=1) return 1;
        
        int prev2=1, prev1=1, curr=0;
        for(int i=2; i<=n; i++){
            curr= (prev1+prev2) %1000000007;
            
            prev2= prev1;
            prev1= curr;
        }
        
        return prev1;
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