// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    static bool compare(pair<int,int> a, pair<int,int> b){
        return (a.second < b.second);
    }
    
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            v[i]= {start[i],end[i]};
        }
        
        sort(v.begin(),v.end(),compare);
        
        int prev = 0;
        int res = 1;
        for(int curr=1;curr<n;curr++){
            if(v[curr].first > v[prev].second){
                res++;
                prev=curr;
            }
        }
        return res;
    }
};
// https://www.youtube.com/watch?v=AsbDqOauGZE
// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends