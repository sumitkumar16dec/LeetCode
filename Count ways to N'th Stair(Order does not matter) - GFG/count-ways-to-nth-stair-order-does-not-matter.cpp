// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int n)
    {
        //return 1+(m/2);
        // OR
        if(n<=1) return 1;
        
        int prev2=1, prev1=1, curr=0;
        for(int i=2; i<=n; i++){
            curr= (prev2+1);
            
            prev2= prev1;
            prev1= curr;
        }
        
        return prev1;
    }
};

// { Driver Code Starts.
int main()
{
    //taking count of testcases
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
}  // } Driver Code Ends