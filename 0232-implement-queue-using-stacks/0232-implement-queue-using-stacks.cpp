class MyQueue {
public:
stack<int>s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
    //   s2.push(x);
    //   while(!s1.empty()){
    //     int a =s1.top();
    //     s1.pop();
    //     s2.push(a);
    //   }  
    //   while(!s2.empty()){
    //     int a =s2.top();
    //     s2.pop();
    //     s1.push(a);
    //   }
    s1.push(x);
    }
    
    int pop() {
        while(!s1.empty()){
            int a =s1.top();
            s2.push(a);
            s1.pop();
        }
        int b = s2.top();
        s2.pop();
        while(!s2.empty()){
            int a =s2.top();
            s1.push(a);
            s2.pop();
        }
        return b;
    }
    
    int peek() {
        while(!s1.empty()){
            int a =s1.top();
            s2.push(a);
            s1.pop();
        }
        int b = s2.top();
        while(!s2.empty()){
            int a =s2.top();
            s1.push(a);
            s2.pop();
        }
        return b;
    }
    
    bool empty() {
        return s1.size()==0 ? 1:0;
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