class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    MyQueue() {
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(!output.empty()){
            int x= output.top();
            output.pop();
            return x;
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            int x= output.top();
            output.pop();
            return x;
        }
    }
    
    int peek() {
        if(!output.empty()){
            return output.top();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};
// TC: O(1) [amortized], SC: O(2n)
// https://youtu.be/3Et9MrMc02A

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */