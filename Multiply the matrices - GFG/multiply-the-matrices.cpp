// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        int n1=A.size();
        int n2=B.size();
        int m1=A[0].size();
        int m2=B[0].size();
        vector<vector<int>> ans;
        if(m1==n2){
            for(int i=0;i<n1;i++){
                
                vector<int> temp;
                for(int j=0;j<m2;j++){
                    int sum=0;
                    for(int k=0;k<m1;k++){
                        sum += (A[i][k] * B[k][j]);
                    }
                    temp.push_back(sum);
                }
                ans.push_back(temp);
                
            }
        }
        return ans;
    }
};       // Reference : https://www.youtube.com/watch?v=DvG9SF2VXL4


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > A(row); 
        for(int i=0; i<row; i++)
        {
            A[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>A[i][j];
            }
        }
        cin>> row>> col;
        vector<vector<int> > B(row);
        for(int i=0; i<row; i++)
        {
            B[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>B[i][j];
            }
        }
        Solution ob;
        vector<vector<int> > result = ob.multiplyMatrix(A,B);

        if(result.size() == 0)
            cout<<"-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout<<result[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends