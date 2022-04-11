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
    	
    	int M=pat.size(), N=txt.size(), i = 0;
        while (i <= N - M)  
        {  
            int j;  
            for (j = 0; j < M; j++)  
                if (txt[i + j] != pat[j])  
                    break;  
            if (j == M) {return true;}  
            else if (j == 0)  i = i + 1;  
            else  i = i + j; 
        }
        return false;
    	
    } 
};          // Overall TC: O(n+m)




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
}  // } Driver Code Ends