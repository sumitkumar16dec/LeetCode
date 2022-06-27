// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
// Function to print the k numbers with most occurrences 

class Solution
{
    public:
    //Function to return the sum of frequencies of k numbers
    //with most occurrences in an array.
    int kMostFrequent(int arr[], int n, int k) 
    { 
    	unordered_map<int,int> m;
    	for(int i=0;i<n;i++) m[arr[i]]++;
    	
    	priority_queue<int, vector<int>, greater<int>> pq;
    	for(auto it=m.begin(); it!=m.end(); it++){
    	    if(pq.size()<k) pq.push(it->second);
    	    else{
    	        if(pq.top()<it->second) {pq.pop(); pq.push(it->second);}
    	    }
    	}
    	
    	int sum=0;
    	while(!pq.empty()){
    	    sum+=pq.top(); pq.pop();
    	}
    	return sum;
    } 
};
// https://www.youtube.com/watch?v=cVpcHXr8CCI&t=142s
// { Driver Code Starts.
// Driver program to test above 
int main() 
{
	int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.kMostFrequent(arr, n, k) << endl; 
    }

	return 0; 
} 
  // } Driver Code Ends