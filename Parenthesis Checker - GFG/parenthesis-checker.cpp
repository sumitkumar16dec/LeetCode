// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    bool matching(char a, char b){
        if(a=='(' && b==')') return true;
        else if(a=='{' && b=='}') return true;
        else if(a=='[' && b==']') return true;
        return false;
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        for(char a: x){
            if(a=='(' || a=='{' || a=='[') s.push(a);
            else if(a==')' || a=='}' || a==']'){
                if( s.empty() || !matching(s.top(),a) ) return false;
                else s.pop();
            }
        }
        return (s.empty()==true);
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends