// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        
        stack<long long> st;
        vector<long long> r(n), l(n);   // USE OF ARRAY WILL GIVE SEGMENTATION ERROR ON LARGE VALUES
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(i);
            else{
                while(!st.empty() && arr[st.top()]>arr[i]){
                    r[st.top()]=i; st.pop();
                }
                st.push(i);
            }
        }
        while(!st.empty()){
            r[st.top()]=n; st.pop();
        }
        
        
        for(int i=n-1;i>=0;i--){
            if(st.empty()) st.push(i);
            else{
                while(!st.empty() && arr[st.top()]>arr[i]){
                    l[st.top()]=i; st.pop();
                }
                st.push(i);
            }
        }
        while(!st.empty()){
            l[st.top()]=-1; st.pop();
        }
        
        long long ans=0;
        for(int i=0;i<n;i++){
            long long tp=(r[i]-l[i]-1)*arr[i];
            ans=max(ans,tp);
        }
        return ans;
        
    }
}; // https://www.youtube.com/watch?v=s6FkU-3Abgc&t=106s


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends