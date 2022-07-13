// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       int dp[n+1];  // AS: O(n)
       for(int i=1;i<=n;i++) dp[i]=INT_MAX;
       dp[0]=INT_MIN;
       
       for(int i=0;i<n;i++){  // O(n)
           int idx= upper_bound(dp, dp+n+1, a[i]) - dp;  // O(logn)
           if(a[i]>dp[idx-1] && a[i]<dp[idx]) dp[idx]=a[i];
       }
       
       int ma=0;
       for(int i=n;i>=0;i--){
           if(dp[i]!=INT_MAX) {ma=i; break;}
       }
       
       return ma;
    }
};
// TC : O(nlogn) , AS : O(n)
// https://www.youtube.com/watch?v=1qD1FLhKrIE&t=197s
// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends