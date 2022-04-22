// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    long long findRank(string str) {
        
        long long int n = str.size();
        long long int fact[n+1] ={0};
        long long int rank[n] ={0};
        fact[0]=1;
        for(int i=1;i<=n;i++){
            fact[i] = i*fact[i-1];
        }
        long long int ans = 0;
        for(int i=0;i<n-1;i++){
            int count = 0;
            for(int j=i+1;j<n;j++){
                if(str[i]>str[j]) count++;
            }
            rank[i]=count;
        }
        for(int i=0;i<n;i++){
            ans+=rank[i]*fact[n-1-i];
        }
        return ans+1;
        
    }
};  // https://www.youtube.com/watch?v=2VIxVd50lB4

// { Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}  // } Driver Code Ends