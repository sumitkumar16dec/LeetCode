// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


 // } Driver Code Ends
class Solution 
{
    public:
    bool valid(int row, int col, int grid[N][N], int val){
        for(int i=0;i<N;i++){
            if(grid[i][col]==val || grid[row][i]==val) return false;
        }
            
        int startrow = 3*(row/3);
        int startcol = 3*(col/3);
        for(int i=startrow; i<startrow+3; i++){
            for(int j=startcol; j<startcol+3; j++){
                if(grid[i][j]==val) return false;
            }
        }
        return true;
    }
    
    bool solve(int grid[N][N], int row, int col){
        if(row==8 && col==9) return true;
        else if(col==9) {row++; col=0;}
        
        if(grid[row][col]!=0){
            if(solve(grid, row, col+1)) return true;
            return false;
        }
        
        for(int num=1;num<=9;num++){
            if(valid(row,col,grid,num)){
                grid[row][col]=num;
                if(solve(grid, row, col+1)) return true;
                grid[row][col]=0;  // backtrack, i.e, came as it was before
            }
        }
        return false;
    }
    
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        return solve(grid, 0, 0);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<grid[i][j]<<" ";
            }
        }
    }
};
// https://www.youtube.com/watch?v=YIEiiXoikiw

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends