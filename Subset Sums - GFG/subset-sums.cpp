//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void func(int ind, int sum, vector<int> &sumSubset, vector<int> &arr, int N){
        // base case
        if(ind==N) {sumSubset.push_back(sum); return;}
        
        // pick element
        func(ind+1, sum+arr[ind], sumSubset, arr, N);
        
        // not pick element
        func(ind+1, sum, sumSubset, arr, N);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumSubset;      // SC: O(2^N)
        func(0, 0, sumSubset, arr, N);      // O(2^N)
        sort(sumSubset.begin(), sumSubset.end());   // 2^N log 2^N
        return sumSubset;
    }
};
// TC: O(2^N + 2^N log 2^N), SC: O(2^N)
// https://youtu.be/rYkfBRtMJr8


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends