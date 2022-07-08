// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Complete this function

class Solution
{
    public:
    long long solveMem(int coins[],int numberOfCoins,int value, vector<int>& dp){
        //base case
        if(value==0) return 0;
        if(value<0) return INT_MAX;
        if(dp[value]!=-1) return dp[value];
        
        long long mini = INT_MAX;
        for(int i=0; i<numberOfCoins; i++){
            long long ans = solveMem(coins, numberOfCoins, value-coins[i], dp);
            if(ans!=INT_MAX) mini=min(mini, 1+ans);
        }
        dp[value]=mini;
        
        return mini;
    }
    
    //Function to find the minimum number of coins to make the change 
    //for value using the coins of given denominations.
    long long minimumNumberOfCoins(int coins[],int numberOfCoins,int value)
    {
        // int ans = solveRec(coins, numberOfCoins, value);
        // if(ans==INT_MAX) return -1;
        // else return ans;
        vector<int> dp(value+1, -1);
        long long ans = solveMem(coins, numberOfCoins, value, dp);
        if(ans==INT_MAX) return -1;
        else return ans;
    }
};
// https://www.youtube.com/watch?v=A3FHNCAkhxE&t=238s

// { Driver Code Starts.



int main() {
	
	//taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;
	    
	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    //taking value of each coin
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function minimumNumberOfCoins()
	    int answer=obj.minimumNumberOfCoins(coins,numberOfCoins,value);
	    
	    //printing "Not Possible" if answer is -1
	    //else printing answer
	    if(answer==-1)
	    cout<<"Not Possible"<<endl;
	    else
	    cout<<answer<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends