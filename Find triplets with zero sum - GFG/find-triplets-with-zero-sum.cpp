// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 

        sort(arr,arr+n);                               // O(nlogn)
        int count=0;
        for(int i=0;i<n-1;i++){                       //O(n)
            int l=i+1, r=n-1;
            while(l<r){                                //O(n)
                if(arr[i]+arr[l]+arr[r]==0) {return 1;}
                else if(arr[i]+arr[l]+arr[r]<0) l++;
                else if(arr[i]+arr[l]+arr[r]>0) r--;
            }
        }
        return 0;
        
    }                          // Overall TC: O(nlogn)+O(n^2)=O(n^2)
};                             // Overall SC: O(1)
                // Similar ques: https://www.youtube.com/watch?v=PqEiJDdt3S4

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends