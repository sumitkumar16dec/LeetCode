//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void func(int index, int sum, vector<int> arr, int N, vector<int> &sumSubset){
        //base case
        if(index==N){
            sumSubset.push_back(sum);
            return;
        }
        
        // pick element
        func(index+1, sum+arr[index], arr, N, sumSubset);
        
        // not pick element
        func(index+1, sum, arr, N, sumSubset);
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumSubset;
        func(0, 0, arr, N, sumSubset);
        return sumSubset;
    }
};

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