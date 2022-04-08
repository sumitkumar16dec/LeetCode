// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int sizeOfArray, int sum);

 // } Driver Code Ends
// User function Template for C++

// Complete this function
// Function to check if two numbers in the array have sum equal to the given
// sum.
int sumExists(int arr[], int N, int sum) {
    
    unordered_set<int> s(arr,arr+N);      // AS: O(N), TC: O(N)
    
    for(int i=0;i<N;i++){      //  TC: O(N)
        int rem_sum=sum-arr[i];
        if( s.find(rem_sum)!=s.end() && rem_sum!=arr[i]) return 1;
    }
    return 0;
    
}      // Overall AS: O(N), TC: O(N)

// { Driver Code Starts.

int main() {

    int testcases;
    cin >> testcases;
    while (testcases--) {
        int N;
        cin >> N;

        int arr[N];

        for (int i = 0; i < N; i++) cin >> arr[i];
        int sum;
        cin >> sum;

        cout << sumExists(arr, N, sum) << endl;
    }

    return 0;
}  // } Driver Code Ends