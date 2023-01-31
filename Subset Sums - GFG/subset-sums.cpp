//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void func(int ind, int sum, vector<int> &arr, int N, vector<int> &sumSub){
        // base case
        if(ind==N){
            sumSub.push_back(sum);
            return;
        }
        
        // pick element
        func(ind+1, sum+arr[ind], arr, N, sumSub);
        
        // not pick element
        func(ind+1, sum, arr, N, sumSub);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumSub;     // SC: O(2^n)
        func(0, 0, arr, N, sumSub);     // O(2^n)
        sort(sumSub.begin(), sumSub.end()); // O(2^n log2^n)
        return sumSub;
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