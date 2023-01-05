//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> mp;      // SC: O(n)
        int maxi=0, sum=0;
        for(int i=0;i<n;i++){           // O(n)
            sum += A[i];
            if(sum==0){
                maxi =max(maxi, i+1);
            }
            else{
                if(mp.find(sum)!= mp.end()){
                    maxi= max(maxi, i-mp[sum]);
                }
                else mp[sum]=i;
            }
        }
        return maxi;
    }
};
// Avg TC: O(n), SC: O(n)
// https://youtu.be/xmguZ6GbatA


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends