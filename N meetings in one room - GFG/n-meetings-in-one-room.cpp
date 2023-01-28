//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool compare(pair<int,int> a, pair<int,int> b){
        if(a.second==b.second) return a.first<b.first;
        return a.second<b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> v(n);     // SC: O(n)
        for(int i=0;i<n;i++) v[i]= {start[i],end[i]};   // O(n)
        sort(v.begin(), v.end(), compare);          // O(nlogn)
        
        int i=0, cnt=1;
        for(int j=1;j<n;j++){           // O(n)
            if(v[i].second<v[j].first) {cnt++; i=j;}
        }
        return cnt;
    }
};
// TC: O(n+nlogn+n)= O(nlogn), SC: O(n)
// https://www.youtube.com/watch?v=AsbDqOauGZE


//{ Driver Code Starts.
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
}
// } Driver Code Ends