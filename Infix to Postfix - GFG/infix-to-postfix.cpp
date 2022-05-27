// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    
    int precedence(char c){
        if(c=='^') return 3;
        else if(c=='*' || c=='/') return 2;
        else if(c=='+' || c=='-') return 1;
        else return -1;
    }
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        stack<char> st;
        string res;
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) res+=s[i];
            else if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    res+=st.top();
                    st.pop();
                }
                if(!st.empty()) st.pop();
            }
            else{
                while(!st.empty() && precedence(st.top())>=precedence(s[i])){
                    res+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        
        return res;
    }
}; // https://www.youtube.com/watch?v=mg9yi6YuAVk


// { Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}
  // } Driver Code Ends