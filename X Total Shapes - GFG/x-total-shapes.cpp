// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    void mark(vector<vector<char>> &grid, int i, int j, int n, int m){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]!='X') return;
        
        grid[i][j]='2';
        
        mark(grid, i, j-1, n, m);
        mark(grid, i, j+1, n, m);
        mark(grid, i-1, j, n, m);
        mark(grid, i+1, j, n, m);
    }
    
    //Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        
        if(n==0) return 0;
        
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X'){
                    ans++;
                    mark(grid, i, j, n, m);
                }
            }
        }
        return ans;
        
    }
};
// https://www.youtube.com/watch?v=__98uL6wst8
// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends