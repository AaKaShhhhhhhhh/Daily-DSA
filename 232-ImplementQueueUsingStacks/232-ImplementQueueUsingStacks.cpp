// Last updated: 7/30/2025, 10:47:16 AM
class MyQueue {
public:
stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop(){
    if(s.empty())return -1;
        
           int val =  s.top();
           s.pop();
        
        if(s.empty()){
            
            return val;
        }
         int front = pop();

        
        s.push(val);

        return front;
        
    }
    
    int peek() {
         if(s.empty())return -1;
        
           int val =  s.top();
           s.pop();
        
        if(s.empty()){
            s.push(val);
            return val;
        }
        int front = peek();

        s.push(val); 
        return front;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */