// Last updated: 7/30/2025, 10:47:18 AM
class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        
        int s = q.size();
        q.push(x);

        for(int i=0;i <s;i++){
            q.push(q.front());
            q.pop();
        }
        
    }
    
    int pop() {
        int val = q.front();
         q.pop();
         return val;
    }
    
    int top() {
        int vall = q.front();
        return vall;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */