//implementing queue using stack
#include<bits/stdc++.h>
using namespace std;


class Queue
{
    stack<int>st;
    stack<int>output;
    public:
    void push(int x)
    {
        st.push(x);
    }
    int pop()
    {
        if(!output.empty())
        {
            int popped=output.top();
            output.pop();
            return popped;
        }
        else
        {
            while(!st.empty())
            {
                output.push(st.top());
                st.pop();
            }

        }
        int popp=output.top();
        output.pop();
        return popp;
    }
    int top()
    {
        if(!output.empty())
        {
            int t=output.top();
            output.pop();
            return t;
        }
        else
        {
            while(!st.empty())
            {
                output.push(st.top());
                st.pop();
            }
        }
       
        int tt=output.top();
        return tt;
    }
};

int main()
{
    Queue q;
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(6);
    cout<<"the popped element is"<<q.pop();
   // cout<<"the top element is"<<q.top();
}