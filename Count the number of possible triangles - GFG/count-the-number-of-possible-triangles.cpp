// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        
        sort(arr,arr+n);                               // O(nlogn)
        int count=0;
        for(int i=n-1;i>=0;i--){                       //O(n)
            int l=0, r=i-1;
            while(l<r){                                //O(n)
                if(arr[l]+arr[r] > arr[i]) {count+=(r-l); r--;}
                else l++;
            }
        }
        return count;
        
    }                          // Overall TC: O(nlogn)+O(n^2)=O(n^2)
};                             // Overall SC: O(1)


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}  // } Driver Code Ends