/*
  This code solves the 225th problm on leetcode "implement-stack-using-queues"
*/
class MyStack {
public:
    vector<int>stack;
    MyStack() {
    }
    
    void push(int x) {
        stack.push_back(x);
    }
    
    int pop() {
        int temp=stack[stack.size()-1];
        stack.pop_back();
        return(temp);
    }
    
    int top() {
        return(stack[stack.size()-1]);
    }
    
    bool empty() {
        return(stack.empty());
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
