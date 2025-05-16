//implementing stack using two queues
#include<bits/stdc++.h>
using namespace std;
class Stack
{
       queue<int>q1;
       queue<int>q2;
       public:
       void push(int x)
       {
          q2.push(x);
          while(!q1.empty())
          {
            q2.push(q1.front());
            q1.pop();
          }
          swap(q1,q2);
          }

          int top()
          {
            return q1.front();
          }
          void pop()
          {
            q1.pop();

          }
       
};

int main()
{
    Stack s;   
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(6);
    cout<<"the top element is"<<s.top();
    s.pop();
    cout<<"after popping top element is"<<s.top();
}