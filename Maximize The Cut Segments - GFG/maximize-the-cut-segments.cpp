// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
    public:
    int func(int n, int x, int y, int z, int dp[]){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        
        int op1= INT_MIN, op2= INT_MIN, op3= INT_MIN;
        if(n>=x) op1 = func(n-x, x, y, z, dp);
        if(n>=y) op2 = func(n-y, x, y, z, dp);
        if(n>=z) op3 = func(n-z, x, y, z, dp);
        
        return dp[n] = 1 + max({op1, op2, op3});
    }
    
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int dp[10001];
        memset(dp, -1, sizeof(dp));
        
        int ans = func(n, x, y, z, dp);
        if(ans<0) return 0;
        else return ans;
    }
};
// https://www.youtube.com/watch?v=O0N4xn38Ncg&t=447s
// { Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}  // } Driver Code Ends