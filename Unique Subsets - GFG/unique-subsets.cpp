// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    void solve(vector<int> &arr, vector<vector<int>> &result, vector<int> &curr, int index){
        result.push_back(curr);
        for(int i=index; i<arr.size(); i++){
            if(i!=index && arr[i]==arr[i-1]) continue;
            curr.push_back(arr[i]);
            solve(arr, result, curr, i+1);
            curr.pop_back();
        }
    }
    
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        vector<vector<int>> result;
        vector<int> curr;
        int index=0;
        
        sort(arr.begin(), arr.end());
        
        solve(arr, result, curr, index);
        return result;
    }
};
// https://www.youtube.com/watch?v=dnHMFQzERM4&t=439s
// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends