// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        
        const int CHAR=256;
        int count[CHAR]={0};
        for(int i=0;i<s.size();i++){              // O(n)
            count[s[i]]++;
        }
        for(int i=0;i<s.size();i++){              // O(n)
            if(count[s[i]]>1) return 0;
        }
        return 1;
        
    }
};         // Two "For loops"

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends