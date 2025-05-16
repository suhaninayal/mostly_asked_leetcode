//implementing queue using stack----->single stack;
#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    stack<int> st;
    int size=5;
   


    void Push(int value)
    {
        if(st.empty())
        {
            st.push(value);
            return;
        }
        int topele=st.top();
        st.pop();
        Push(value);
        st.push(topele);
    }

    int Pop()
    {
        int ele=st.top();
        st.pop();
        return ele;
    }
    int Top()
    {
       int intopi=st.top();
        return intopi;
    }
};


int main()
{
    Stack s;
    s.Push(2);
    s.Push(8);
    s.Push(1);
    s.Push(3);
    cout<<"the pop element is "<<s.Pop();
    cout<<"the top element is"<<s.Top();
}