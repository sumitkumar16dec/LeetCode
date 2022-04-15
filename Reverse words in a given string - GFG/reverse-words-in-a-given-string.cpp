// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    
    void reverse(string &str, int low, int high){
        while(low<=high){
            swap(str[low],str[high]); low++; high--;
        }
    }
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int start=0, n=S.size();
        for(int i=0;i<n;i++){
            if(S[i]=='.'){
                reverse(S,start,i-1);
                start=i+1;
            }
        }
        reverse(S,start,n-1);  // reversing last word
        reverse(S,0,n-1);  // reversing whole setence
        return S;
    }
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends