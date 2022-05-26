// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string remove3ConsecutiveDuplicates(string S)
	{
	    string ans="";
	    for(int i=0;i<S.size();i++){
	        ans+=S[i];
	        if(ans.size()>2){
	            int sz=ans.size();
	            if(ans[sz-1]==ans[sz-2] && ans[sz-2]==ans[sz-3]){
	                ans.pop_back(); ans.pop_back(); ans.pop_back();
	            }
	        }
	    }
	    if(ans.size()==0) return "-1";
	    return ans;
	}
};

// { Driver Code Starts.


int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string S;
   		cin >> S;

   	    Solution ob;

   		cout << ob.remove3ConsecutiveDuplicates(S) << "\n";
   	}

    return 0;
}
     // } Driver Code Ends