// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        // for that A1 elements which are present in A2
        vector<int> ans;             // AS: O(n)
        map<int,int> m;             // AS: O(n)
        for(int i=0;i<N;i++){             // TC: O(n)
            m[A1[i]]++;
        }
        for(int i=0;i<M;i++){             // TC: O(n)
            if(m.find(A2[i])!=m.end()){
                int count=m[A2[i]];
                while(count--){
                    ans.push_back(A2[i]);
                }
                m.erase(A2[i]);
            }
        }
        
        // for that A1 elements which are not present in A2
        for(auto x: m){             // TC: O(n)
            int count=x.second;
            while(count--){
                ans.push_back(x.first);
            }
            m.erase(x.first);
        }
        
        return ans;
        
    }              // Overall AS: O(n), TC: O(n)
};                // https://www.youtube.com/watch?v=hYsX_hcq1uU

// { Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
  // } Driver Code Ends