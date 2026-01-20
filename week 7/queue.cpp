class MyQueue {
private:
    stack<int> st;
    stack<int> temp;
public:
    MyQueue() {        
    }
    
    void push(int x) {
        temp.push(x);
    }
    
    int pop() {
        if(st.empty())
        {
            while(temp.size()!=0)
            {
                int ch=temp.top();
                temp.pop();
                st.push(ch);      
            }
        }
        int c=st.top();
        st.pop();
        return c;
    }
    
    int peek() {
        if(st.empty())
        {
            while(temp.size()!=0)
            {
                int ch=temp.top();
                temp.pop();
                st.push(ch);      
            }
        }
        int c=st.top();
        return c;
    }
    
    bool empty() {
        if(st.empty()&&temp.empty())
        {
            return true;
        }
        else return false;
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
