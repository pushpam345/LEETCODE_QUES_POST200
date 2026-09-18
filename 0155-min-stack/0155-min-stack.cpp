class MinStack {
public:
stack<long long> s;
        long long  mini;
    MinStack() {
        
    }
    
    void push(int value) {
       if(s.empty() ){
        s.push(value);
        mini=value;
        return ;
       }
       if(value>mini ){
        s.push(value);
        
        
       }
        else {
        s.push(2LL*value-mini);
        mini=value;
       } 
    }
    
    void pop() {
        long long x=s.top();

        s.pop();
        if(x<mini){
            mini=(2LL*mini-x);
        }
        
    }
    
    int top() {
        long long x=s.top();
        if(x>mini){
            return x;
        }
        else{
            return mini;
        }
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */