// { Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        
        unordered_map<char,int> map;          // AS: O(N)
        string res="";
        
        for(int i=0;i<s2.size();i++){         // TC: O(s2)
            map[s2[i]]=2;
        }
        
        for(int i=0;i<s1.size();i++){         // TC: O(s1)
            if(map.find(s1[i])==map.end()) res+=s1[i];
            else map[s1[i]]=1;
        }
        
        for(int i=0;i<s2.size();i++){         // TC: O(s2)
            if(map[s2[i]]==2) res+=s2[i];
        }
        
        if(res=="") return "-1";
        else return res;
        
    }   // Overall AS: O(N) , TC: O(s1+s2)
};    // https://www.youtube.com/watch?v=IO1X5-hO450

// { Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}
  // } Driver Code Ends