// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       
       int start=0;
       int requiredFuel=0;
       int extraFuel=0;
       for(int i=0;i<n;i++){
           extraFuel+=(p[i].petrol-p[i].distance);
           if(extraFuel<0){
               start=i+1;
               requiredFuel+=extraFuel;
               extraFuel=0;
           }
       }
       if(requiredFuel+extraFuel>=0) return start;
       return -1;
       
    }
}; // https://www.youtube.com/watch?v=7WYwqvOSaa8&t=535s



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends