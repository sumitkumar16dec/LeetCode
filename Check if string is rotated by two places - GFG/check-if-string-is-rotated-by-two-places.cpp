// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {

        string str2_1=str2.substr(str2.size()-2,str2.size());
        string str2_2=str2.substr(0,str2.size()-2);
        string str2_3=str2_1+str2_2;
        if(str2_3==str1) return 1;
        
        str2_1=str2.substr(2,str2.size());
        str2_2=str2.substr(0,2);
        str2_3=str2_1+str2_2;
        if(str2_3==str1) return 1;
        
        return 0;
        
    }   // https://www.youtube.com/watch?v=Wfil2fyhj1M
};      // Overall AS: O(n) , TC: O(n)

// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends