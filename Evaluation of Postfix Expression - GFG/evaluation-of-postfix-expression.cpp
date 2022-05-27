// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        
        stack<int> st;
        for(int i=0;i<S.size();i++){
            if(S[i]>='0' && S[i]<='9') st.push(S[i]-'0');
            else{
                int op2=st.top();
                st.pop();
                int op1=st.top();
                st.pop();
                
                switch(S[i]){
                    case '+': st.push(op1+op2); break;
                    case '-': st.push(op1-op2); break;
                    case '*': st.push(op1*op2); break;
                    case '/': st.push(op1/op2); break;
                    case '^': st.push(pow(op1,op2)); break;
                }
            }
        }
        return st.top();
        
    }  // https://www.youtube.com/watch?v=5B6jw4wOJR0
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends