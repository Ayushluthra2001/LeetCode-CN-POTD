class MyQueue {
public:
    stack<int>s;

    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int>temp;
        while(!s.empty()){
            temp.push(s.top());
            s.pop();

        }   
        s.push(x);
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        } 
    }
    
    int pop() {
        int x=s.top();
        s.pop();
        return x;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
    if(s.empty()) return true;
    return false;        
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
