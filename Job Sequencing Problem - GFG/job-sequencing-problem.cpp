//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

bool comparator(Job x, Job y){
    return (x.profit > y.profit);
}

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr+n, comparator);       // O(nlogn)
        bool array[n+1]= {false};           // SC: O(n)
        int pro=0, count=0;
        
        for(int i=0;i<n;i++){               // O(n)
            for( int j=min(n,arr[i].dead); j>0; j-- ){  // O(n)
                if(array[j]==false){
                    pro += arr[i].profit;
                    count++;
                
                    array[j]=true;
                    break;
                }
            }
        }
        vector<int> res;
        res.push_back(count);
        res.push_back(pro);
        return res;
    } 
};
// TC: O(nlogn + n^2)= O(n^2), SC: O(n)
// https://www.youtube.com/watch?v=RcomoqzZMF4


//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends