// { Driver Code Starts
#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string a)
    {
        
        int count=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==a[i+1] && a[i+1]==a[i+2]){
                count++;
                i+=1;
            }
        }
        return count;
        
    }
};  // TC: O(N) , AS: O(1)

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}
  // } Driver Code Ends