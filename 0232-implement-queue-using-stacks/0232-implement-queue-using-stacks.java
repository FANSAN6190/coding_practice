class MyQueue {
    Stack<Integer> stk1 = new Stack<>();
    int front=-1;
    public MyQueue() {
        
    }
    
    public void push(int x) {
        if(stk1.isEmpty()){
            front=x;
        }
        stk1.push(x);
    }
    
    public int pop() {
        Stack<Integer> stk2 = new Stack<>();
        while(!stk1.isEmpty()){
            stk2.push(stk1.pop());
        }
        int k=stk2.pop();
        if(stk2.isEmpty()){
            front=-1;
            return k;
        }
        front=stk2.peek();
        while(!stk2.isEmpty()){
            stk1.push(stk2.pop());
        }
        return k;
    }
    
    public int peek() {
        return front;
    }
    
    public boolean empty() {
        return stk1.isEmpty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */