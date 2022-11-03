//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        int nxtgap(int gap){
            if(gap==0 || gap==1) return 0;
            return (gap/2) + (gap%2);
        }
        
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int temp= m+n;
            for(int gap=nxtgap(temp); gap>0; gap=nxtgap(gap)){        // O(log(n+m))
                for(int i=0;i<(n+m);i++){                             // O(n+m)
                    
                    int j=i+gap;
                    if(j>=(n+m)) break;
                    
                    if(i<n && j<n) {if(arr1[i]>arr1[j]) swap(arr1[i], arr1[j]);}
                    else if(i<n && j>=n) {if(arr1[i]>arr2[j-n]) swap(arr1[i], arr2[j-n]);}
                    else if(i>=n && j>=n) {if(arr2[i-n]>arr2[j-n]) swap(arr2[i-n], arr2[j-n]);}
                }
            }
        } 
};
// TC: O(log(n+m) * (n+m)) , SC: O(1)
// Editorial video

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends