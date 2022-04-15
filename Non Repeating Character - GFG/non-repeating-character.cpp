// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       
       const int CHAR=256;
       int fI[CHAR];                 // AS: O(No of distinct characters) or O(CHAR)
       fill(fI,fI+CHAR,-1);          // TC: O(CHAR)
       for(int i=0;i<S.size();i++){  // TC: O(N)
           if(fI[S[i]]==-1) fI[S[i]]=i;
           else fI[S[i]]=-2;
       }
       int res=INT_MAX;
       for(int i=0;i<CHAR;i++){      // TC: O(CHAR)
           if(fI[i]>=0) res=min(res,fI[i]);
       }
       return (res==INT_MAX) ? '$' : S[res];
       
    }  // Overall TC: O(N + CHAR) , AS: O(CHAR)
};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
  // } Driver Code Ends