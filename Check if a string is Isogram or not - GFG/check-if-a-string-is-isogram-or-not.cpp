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
        bool visited[CHAR];
        fill(visited,visited+CHAR,false);
        for(int i=0;i<s.size();i++){              // O(n)
            if(visited[s[i]]==true) return 0;
            else visited[s[i]]=true;
        }
        return 1;
        
    }
};         // One "For loop"

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