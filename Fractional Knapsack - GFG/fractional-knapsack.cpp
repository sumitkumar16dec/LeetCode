// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

bool comp(Item a, Item b){
    double r1= (double)a.value / (double)a.weight;
    double r2= (double)b.value / (double)b.weight;
    return r1>r2;
}

class Solution
{
    public:
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, comp);     // O(nlogn)
        
        int curWei= 0; double maxVal=0.0;
        for(int i=0;i<n;i++){       // O(n)
            if(curWei + arr[i].weight <= W){
                maxVal += arr[i].value;
                curWei += arr[i].weight;
            }
            else{
                int remain= W-curWei;
                maxVal += (arr[i].value/(double)arr[i].weight) * (double)remain;
                break;
            }
        }
        return maxVal;
    }
};
// TC: O(nlogn+n)=O(nlogn), SC: O(1)
// https://youtu.be/F_DDzYnxO14


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends