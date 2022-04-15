// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        
        unordered_map<char,int> map;           // AS: O(N)
        for(int i=0;i<str.size();i++){         // TC: O(N)
            map[str[i]]++;
        }
        
        int maxCount=0;
        char ch;
        
        for(pair<char,int> p: map){            // TC: O(N)
            if(maxCount<p.second){
                maxCount=p.second;
                ch=p.first;
            }
            else if(maxCount==p.second){
                if(ch>p.first) ch=p.first;
            }
        }
        return ch;
        
    }    // Overall AS: O(N)  ,  TC: O(N)
};    // https://www.youtube.com/watch?v=tEbl-hu_ffk

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends