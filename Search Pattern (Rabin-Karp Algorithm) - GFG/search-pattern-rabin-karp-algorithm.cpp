// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            
            vector<int> res;
            int m=pat.size();
            int n=txt.size();
            int h=1, d=256, q=13;
            for(int i=0;i<m-1;i++){
                h=(h*d)%q;
            }
            
            int p=0, t=0;
            for(int i=0;i<m;i++){
                p=(p*d + pat[i])%q;
                t=(t*d + txt[i])%q;
            }
            
            for(int i=0;i<=n-m;i++){
                if(p==t){
                    bool flag=true;
                    for(int j=0;j<m;j++){
                        if(txt[i+j]!=pat[j]) {flag=false; break;}
                    }
                    if(flag==true) res.push_back(i+1);
                }
                if(i<n-m){
                    t=(d*(t-txt[i]*h) + txt[i+m])%q;
                    if(t<0) t=t+q;
                }
            }
            if(res.empty()) cout<<-1;
            else return res;
            
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends