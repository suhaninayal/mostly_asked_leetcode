//implementing stack using array
#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    int size;
    int *st;
    int top;
    public:
    Stack()
    {
        top=-1;
        size=100;
        st=new int[size];
    }
    void push(int x)
    {
        top++;
        st[top]=x;
    }
    int pop()
    {
        int x=st[top];
        top--;
        return x;
    }
    int Top()
    {
        return st[top];
    }
    int Size()
    {
        return top+1;
    }
};

int main()
{
    Stack s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.pop();
    cout<<"top of the stack before deleteing any element"<<s.Top();
    cout<<"size of the stack is"<<s.Size();
}