// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      
      unordered_set<int> s(arr,arr+N);        // AS: O(n)
      int ans=1;
      for(auto x: s){                         // TC: O(n)
          if(s.find(x-1)==s.end()){
              int curr=1;
              while( s.find(x+curr)!=s.end() ) {curr++;}
              ans=max(ans,curr);
          }
      }
      return ans;
      
    }
};        // Overall AS: O(n) ,  TC: O(n)

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends