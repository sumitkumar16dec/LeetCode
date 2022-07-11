// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of jumps to reach the end of the array.
    int minimumJumps(int arr[], int n){
        
        int maxR = arr[0];
        int step = arr[0];
        int jump = 1;
        
        if(n==1) return 0;
        else if(arr[0]==0) return -1;
        else{
            for(int i=1;i<n;i++){
                if(i==n-1) return jump;
                
                maxR= max(maxR, i+arr[i]);
                step--;
                if(step==0){
                    jump++;
                    if(i>=maxR) return -1;
                    step = maxR-i;
                }
            }
        }
        
    }
};
// https://www.youtube.com/watch?v=CqgK_qi4SKQ
// { Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minimumJumps(arr, n)<<endl;    // Function to calculate minimum number of jumps
    }
    return 0;
}  // } Driver Code Ends