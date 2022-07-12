// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    int numTrees(int N) 
    {
        int dp[N+1];
        dp[0]=1;
        dp[1]=1;
        
        for(int i=2;i<=N;i++){
            dp[i]=0;
            for(int j=1;j<=i;j++){
                long long leftBST = dp[j-1];
                long long rightBST = dp[i-j];
                dp[i] = (dp[i] + (leftBST * rightBST)%1000000007) %1000000007;
            }
        }
        
        return dp[N];
    }
};
// https://www.youtube.com/watch?v=d9wD1_KtjOU
// https://www.youtube.com/watch?v=p3utBl_EzA4
// { Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	  // } Driver Code Ends