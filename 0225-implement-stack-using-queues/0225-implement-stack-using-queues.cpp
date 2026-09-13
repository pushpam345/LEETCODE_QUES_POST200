class MyStack {
public:
queue<int>q1,q2;
    MyStack() {
         
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            int a=q1.front();
            q1.pop();
            q2.push(a);
        }
        while(!q2.empty()){
            int a=q2.front();q2.pop();
            q1.push(a);
        }
    }
    
    int pop() {
        int a = q1.front();
        q1.pop();return a;
        
    }
    
    int top() {
        int a =q1.front();
        
        return a;
    }
    
    bool empty() {
        if(q1.size()==0)return 1;
        return 0; 
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