// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    static bool compare(pair<int,int> a, pair<int,int> b){
        return (a.second < b.second);
    }
    
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) v[i]={start[i],end[i]};
        
        sort(v.begin(), v.end(), compare);
        
        int prev = 0;
        int res = 1;
        for(int curr=1; curr<n; curr++){
            if(v[curr].first > v[prev].second){
                res++;
                prev = curr;
            }
        }
        return res;
    }
};
// https://www.youtube.com/watch?v=AsbDqOauGZE
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends