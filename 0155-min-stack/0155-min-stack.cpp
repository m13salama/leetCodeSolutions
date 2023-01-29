class MinStack {
private:
    stack<pair<int, int>> soso;
    int min;
public:
    MinStack() {
        min = INT_MAX;
    }
    
    void push(int val) {
        if(val < min) min = val;
        soso.push(pair<int, int>(val,min));
    }
    
    void pop() {
        soso.pop();
        soso.size() == 0? min = INT_MAX : min = soso.top().second;
    }
    
    int top() {
        return soso.top().first;
    }
    
    int getMin() {
        return soso.top().second;
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