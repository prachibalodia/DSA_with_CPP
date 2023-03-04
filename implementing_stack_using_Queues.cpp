class MyStack {
    queue<int> q1, q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(!q1.empty()){
            q1.push(x);
        }
        else
        q2.push(x);
        
    }
    
    int pop() {
        int t;
        if(q1.empty()){
            //shifting elements from q2 to q1
            while(!q2.empty()){
            int f= q2.front();
            q2.pop();
            if(q2.empty()){
                t=f;
                break;
            }
            q1.push(f);            
        }
        }
        else{
            //shifting elements from q1 to q2, as q2 is empty now
            while(!q1.empty()){
                int f= q1.front();
                q1.pop();
                if(q1.empty()){
                    t=f;
                    break;
                }
                q2.push(f);
            }
        }
        return t;
        
    }
    
    int top() {
        if(!q1.empty())
        return q1.back();

        else
        return q2.back();
        
    }
    
    bool empty() {
        if(q1.empty() && q2.empty()){
            return true;
        }
        return false;
        
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