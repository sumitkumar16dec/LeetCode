class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c: s){
            if(c=='(' || c=='{' || c=='[') st.push(c);
            else{
                if(st.empty()) return false;
                char x= st.top(); st.pop();
                if((c==')' && x=='(')
                || (c=='}' && x=='{')
                || (c==']' && x=='[')
                ) continue;
                else return false;
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
// TC: O(n), SC: O(n)
// https://youtu.be/wkDfsKijrZ8