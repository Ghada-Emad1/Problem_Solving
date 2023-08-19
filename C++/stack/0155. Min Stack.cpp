class MinStack {
    private:
    stack<int>stk;
    stack<pair<int,int>>minstk;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(minstk.empty()|| val<minstk.top().first){
            minstk.push({val,1});
        }else if(val==minstk.top().first){
            minstk.top().second++;
        }
    }
    
    void pop() {
        if(stk.top()==minstk.top().first){
            minstk.top().second--;
        }
        if(minstk.top().second==0){
            minstk.pop();
        }
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minstk.top().first;
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