class MinStack {
public:
    stack<long> st;
    long mini;
    MinStack() {
        while(!st.empty()) st.pop();
        mini= INT_MAX;
    }
    
    void push(int val) {
        if(val >= mini) st.push(val);
        else{
            st.push(2*val - mini);
            mini = val;
        }
    }
    
    void pop() {
        if(st.empty()) return;
        if(st.top()>mini) st.pop();
        else{
            mini= 2*mini - st.top();
            st.pop();
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        if(st.top()>=mini) return st.top();
        else return mini;
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