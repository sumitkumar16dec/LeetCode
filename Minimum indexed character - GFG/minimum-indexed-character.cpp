// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        unordered_map<char,int> m;
        for(int i=0;i<str.size();i++){
            if(m.find(str[i])==m.end()) m[str[i]]=i;
        }
        int min_index=INT_MAX;
        for(int i=0;i<patt.size();i++){
            if( m.find(patt[i])!=m.end() ) min_index=min(min_index,m[patt[i]]);
        }
        if(min_index!=INT_MAX) return min_index;
        else return -1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends