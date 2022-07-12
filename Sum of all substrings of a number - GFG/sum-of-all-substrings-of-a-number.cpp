// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        
        long long dp[s.size()];
        dp[0]= int(s[0]-'0');
        long long res=0, p=1000000007;
        res=dp[0]; 

        for(int i=1;i<s.length();i++)
        {
            int cur_digit=(int)(s[i]-'0');
            
            //storing [current digit*(i+1)+dp[i-1]*10] at dp[i].
            dp[i]=(((i+1)*(cur_digit))%p+(dp[i-1]*10)%p)%p; 

            res = (res+dp[i])%p;                            
        }

        return res;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}
  // } Driver Code Ends