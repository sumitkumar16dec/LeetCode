// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    // long long f(int coins[],int index,int value){
        
    //     if(index==0) return (value % coins[0] == 0);
        
    //     long long notTake = f(coins, index-1, value);
    //     long long take=0;
    //     if(coins[index]<=value) take=f(coins, index, value-coins[index]);
    //     return take + notTake;
        
    // }
    
    // long long fMem(int coins[],int index,int value, vector<vector<long long>>& dp){
        
    //     if(index==0) return (value % coins[0] == 0);
    //     if(dp[index][value]!=-1) return dp[index][value];
        
    //     long long notTake = fMem(coins, index-1, value, dp);
    //     long long take=0;
    //     if(coins[index]<=value) take=fMem(coins, index, value-coins[index], dp);
    //     return dp[index][value] = take + notTake;
        
    // }
    
    //Function to find out the number of ways to use the coins to
    //sum up to a certain required value.
    long long numberOfWays(int coins[],int numberOfCoins,int value)
    {
        // vector<vector<long long>> dp( numberOfCoins, vector<long long>(value+1, -1) );
        // return fMem(coins, numberOfCoins-1, value, dp);
        
        //vector<vector<long long>> dp( numberOfCoins, vector<long long>(value+1, 0) );
        vector<long long> prev(value+1, 0), curr(value+1, 0);
        
        for(int t=0; t<=value; t++){
            prev[t]=(value % coins[0] == 0);
        }
        
        for(int index=1; index<numberOfCoins; index++){
            for(int t=0; t<=value; t++){
                long long notTake = prev[t];
                long long take=0;
                if(coins[index]<=t) take=curr[t-coins[index]];
                curr[t] = take + notTake;
            }
            prev = curr;
        }
        
        return prev[value];
    }
};
// https://www.youtube.com/watch?v=HgyouUi11zk&t=57s

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
	    
	    //inserting coins to the array
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function numberOfWays
	    cout<<obj.numberOfWays(coins,numberOfCoins,value)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends