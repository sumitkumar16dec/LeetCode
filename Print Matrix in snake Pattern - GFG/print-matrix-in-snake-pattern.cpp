// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        vector<int> result;                // Auxiliary Space: O(N * N)
        for(int i=0;i<matrix.size();i++){        // Time Complexity: O(N * N)
            if(i%2==0) for(int j=0;j<matrix[i].size();j++) result.push_back(matrix[i][j]);
            else if(i%2!=0) for(int j=matrix[i].size()-1;j>=0;j--) result.push_back(matrix[i][j]);
        }
        return result;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends