// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     
     int m=x.size(), n=s.size(), i;
    	for(i=0;i<=(n-m);i++){                  // O(n)
    	    int j;
    	    for(j=0;j<m;j++){                   // O(m)
    	        if(x[j]!=s[j+i]) break;
    	    }
    	    if(j==m) return i;
    	}
    	return -1;
    	
}  // Overall TC: O(n*m)