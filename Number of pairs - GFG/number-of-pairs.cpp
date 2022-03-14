// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 

class Solution{
    public:
    
    int getIndex(int y[], int N, int ele){
        int low=0;
        int high=N-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(y[mid]>ele){
                ans=mid;
                high=mid-1;
            }
            else {low=mid+1;}
        }
        return ans;
    }
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long countPairs(int X[], int Y[], int M, int N)
    {
       
       
       int zeros=0, ones=0, twos=0, threes=0, fours=0;
       sort(X,X+M); sort(Y,Y+N);
       for(int i=0;i<N;i++){
           if(Y[i]==0) zeros++;
           if(Y[i]==1) ones++;
           if(Y[i]==2) twos++;
           if(Y[i]==3) threes++;
           if(Y[i]==4) fours++;
       }
       
       long ans=0;
       for(int i=0;i<M;i++){
           if(X[i]==0) continue;
           else if(X[i]==1) ans+=zeros;
           else if(X[i]==2){
               int index=getIndex(Y, N, 2);
               if(index!=-1) {ans+= N-index;}
               ans-=threes;
               ans-=fours;
               ans+= zeros+ones;
           }
           else{
               int index = getIndex(Y, N, X[i]);
               if(index!=-1) ans+=N-index;
               ans+= zeros+ones;
               if(X[i]==3) ans+=twos;
           }
       }
       return ans;
       
       
    }
};                 // https://www.youtube.com/watch?v=LOBkPJU6g0k&t=520s


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends