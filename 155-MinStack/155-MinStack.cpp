// Last updated: 7/30/2025, 10:47:27 AM
class MinStack {
public:
stack<int> stk;
stack<int> minstk;
    MinStack() {
        
        
    }
    
    void push(int val) {
        
       // minstk.push(val);
        if(minstk.empty() || val<=minstk.top()){
            minstk.push(val);
        }
        stk.push(val);
        
    }
    
    void pop() {
        if(!stk.empty()){
            if(stk.top() == minstk.top()){
            minstk.pop();
        }
        stk.pop();
        }
        
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minstk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */