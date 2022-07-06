// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    void solve(string& max, string str, int k, int idx){
        if(k==0) return;
        
        int n = str.length();
        char maxc = str[idx];
        for(int i=idx+1; i<n; i++){
            if(maxc<str[i]) maxc=str[i];
        }
        
        if(maxc!=str[idx]) k--;  // agar maxc change hua toh
        
        for(int i=n-1;i>=idx;i--){  // traverse from rightmost end
            if(str[i]==maxc){
                swap(str[i],str[idx]);
                if(max < str) max=str;  // agar str bara hua max se toh
            
                solve(max, str, k, idx+1);
                swap(str[idx], str[i]);  // backtrack, i.e, making str as before
            }
        }
    }
    
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k)
    {
       string max=str;
       solve(max,str,k,0);
       return max;
    }
};
// https://www.youtube.com/watch?v=uJlI6XSaXhk
// https://www.youtube.com/watch?v=ZnfqHvAt9bE
// { Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends