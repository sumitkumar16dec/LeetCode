// { Driver Code Starts
// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	
    	int m=pat.size(), n=txt.size();
    	for(int i=0;i<=(n-m);i++){                 // O(n)
    	    int j;
    	    for(j=0;j<m;j++){                   // O(m)
    	        if(pat[j]!=txt[j+i]) break;
    	    }
    	    if(j==m) return 1;
    	}
    	return 0;
    	
    }                 // https://www.youtube.com/watch?v=_ZWnkyae2gA
};                 // Overall TC: O(n*m)


// { Driver Code Starts.

// Driver Code 
int main() 
{ 
	
	int t;
	cin >> t;
	
	while(t--){
	    string s, p;
	    cin >> s >> p;
	    Solution obj;
	    if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}
  // } Driver Code Ends