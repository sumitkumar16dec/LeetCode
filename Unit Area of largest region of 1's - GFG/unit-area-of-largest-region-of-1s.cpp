// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    bool isSafe(vector<vector<int>> &M, int row, int col, vector<vector<int>> &visited, int ROW, int COL){
        return (row>=0 && row<ROW && col>=0 && col<COL && M[row][col]==1 && visited[row][col]==false);
    }
    
    void DFS(vector<vector<int>> &M, int row, int col, vector<vector<int>> &visited, int ROW, int COL, int &count){
        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
        visited[row][col] = true;
        for(int k=0;k<8;k++){
            if(isSafe(M, row+dx[k], col+dy[k], visited, ROW, COL)){
                count++;
                DFS(M, row+dx[k], col+dy[k], visited, ROW, COL, count);
            }
        }
    }
    
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        int ROW = grid.size();
        int COL = grid[0].size();
        
        vector<vector<int>> visited;
        for(int i=0;i<ROW;i++){
            vector<int> temp;
            for(int j=0;j<COL;j++){
                temp.push_back(0);
            }
            visited.push_back(temp);
        }
        
        int result=0; int count=0;
        for(int i=0;i<ROW;i++){
            for(int j=0;j<COL;j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    count=1;
                    DFS(grid, i, j, visited, ROW, COL, count);
                    result = max(result, count);
                }
            }
        }
        return result;
    }
};
// Editorial video
// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends