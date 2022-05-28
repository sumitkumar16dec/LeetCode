// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long int> s;
        vector<long long int> ans;
        s.push(arr[n-1]);
        ans.push_back(-1);
        for(long long int i=n-2;i>=0;i--){
            while(s.empty()==false && s.top()<=arr[i]) s.pop();
            long long int nextGr=s.empty()? -1: s.top();
            ans.push_back(nextGr);
            s.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends