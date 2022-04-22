// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<char> vecA,veca;
        
        // sorting uppercase and lowercase characters in two separate vectors
        for(int i=0;i<n;i++){
            if(int(str[i])<97) vecA.push_back(str[i]);
            else veca.push_back(str[i]);
        }
        
        // sorting both the vectors
        sort(vecA.begin(),vecA.end());
        sort(veca.begin(),veca.end());
        
        int vcA=0, vca=0;
        string answer="";
        
        // iterating over the given string
        for(int i=0;i<n;i++){
            if(int(str[i])<97) answer+=vecA[vcA++];
            else answer+=veca[vca++];
        }
        
        // returning the result
        return answer;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends