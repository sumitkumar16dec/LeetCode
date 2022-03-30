// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        
        int row=matrix.size(), col=matrix[0].size();
        bool arr_row[row]; fill(arr_row, arr_row+row, false);
        bool arr_col[col]; fill(arr_col, arr_col+col, false);
        
        for(int i=0;i<row;i++){                // O(row)
            for(int j=0;j<col;j++){            // O(col)
                if(matrix[i][j]==1){
                    arr_row[i]=true; arr_col[j]=true;
                }
            }
        }
        
        for(int i=0;i<row;i++){                // O(row)
            if(arr_row[i]){
                for(int j=0;j<col;j++){        // O(col)
                    matrix[i][j]=1;
                }
            }
        }
        
        for(int j=0;j<col;j++){                // O(col)
            if(arr_col[j]){
                for(int i=0;i<row;i++){        // O(row)
                    matrix[i][j]=1;
                }
            }
        }
        
    } // Overall AS: O(1),  TC:O(r*c)+O(r*c)+O(r*c)=O(r*c)
};        // https://www.youtube.com/watch?v=TBTNZXzwpP8


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}


  // } Driver Code Ends