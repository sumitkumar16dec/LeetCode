//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countSmallerThanEqualTo(vector<int> &row, int mid){
        int l=0, h=row.size()-1;
        while(l<=h){
            int md= (l+h)/2;
            
            if(row[md]<=mid) l=md+1;
            else h=md-1;
        }
        return l;
    }

    int median(vector<vector<int>> &A, int r, int c){
        int low=1, high=2000;
        while(low<=high){
            int mid= (low+high)/2;
            int cnt=0;
            for(int i=0;i<r;i++){
                cnt += countSmallerThanEqualTo(A[i], mid);
            }
            
            if(cnt <= (r*c)/2) low= mid+1;
            else high= mid-1;
        }
        return low;
    }
};
// TC: O(32*r*logc), SC: O(1)
// https://youtu.be/63fPPOdIr2c


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends