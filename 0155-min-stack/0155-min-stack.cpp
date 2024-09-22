class MinStack {
    stack<long> st;
    long mini;

public:
    MinStack() {
        while(st.empty()==false) st.pop();
        mini= INT_MAX;
    }
    
    void push(int value) {
        long val= value;
        if(st.empty()){
            st.push(val);
            mini= val;
        }
        else{
            if(val < mini){
                st.push(2*val-mini);
                mini= val;
            }
            else{
                st.push(val);
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long top= st.top();
        st.pop();

        if(top<mini) mini= 2*mini-top;
    }
    
    int top() {
        if(st.empty()) return -1;
        long top= st.top();
        if(top<mini) return mini;
        return top;
    }
    
    int getMin() {
        return mini;
    }
};
// TC: O(1), SC: O(N) [using 1 stack]
// https://youtu.be/V09NfaGf2ao

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */