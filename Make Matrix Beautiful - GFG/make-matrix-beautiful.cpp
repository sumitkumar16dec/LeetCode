// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        
        vector<int> sumRow(n,0); vector<int> sumCol(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sumRow[i] += matrix[i][j];
                sumCol[j] += matrix[i][j];
            }
        }
        
        int maxSum=0;
        for(int i=0;i<n;i++){
            maxSum = max(maxSum, sumRow[i]);
            maxSum = max(maxSum, sumCol[i]);
        }
        
        int count=0;
        for(int i=0,j=0;i<n && j<n;){
            int diff=min(maxSum-sumRow[i], maxSum-sumCol[j]);
            matrix[i][j] += diff;
            sumRow[i] += diff;
            sumCol[j] += diff;
            count += diff;
            if(sumRow[i] == maxSum) ++i;
            if(sumCol[j] == maxSum) ++j;
        }
        return count;
        
    } 
};  //  Reference : Full Solution

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}

  // } Driver Code Ends