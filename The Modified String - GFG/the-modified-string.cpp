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
        
        int c=1;
        int ans=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==a[i+1]){
                c++;
                if(c==3){
                    ans++;
                    c=1;
                }
            }
            else {c=1;}
        }
        return ans;
        
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