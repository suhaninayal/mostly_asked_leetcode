#include<bits/stdc++.h>
using namespace std;
class Queue
{
    queue<int> q;
    public:
    void push(int x)
    {
        
        int s=q.size();
        q.push(x);
        for(int i=0;i<s;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    void Pop()
    {
       q.pop();
    }
    int Top()
    {
        return q.front();
    }

};
int main()
{
    Queue q;
    q.push(3);
    q.push(4);
    q.push(6);
    q.push(1);
   // cout<<"the popped ele is"<<q.Pop();
    cout<<"the top is"<<q.Top();
    
}