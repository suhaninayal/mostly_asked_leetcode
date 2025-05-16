//implementing min stack
#include<bits/stdc++.h>
using namespace std;


class MinStack
{
   public:
   stack<pair<int,int>> st;
   int mini;
   MinStack()
   {
      mini=INT_MAX;
   }
   void Push(int val)
   {
     if(st.empty())
     {
        mini=val;
     }
     else
     {
        mini=min(mini,st.top().first);
     }
     st.push({val,mini});
   }

   int getmin()
   {
    return st.top().second;
   }
   int Top()
   {
    return st.top().first;
   }
   int Pop()
   {
    int a=st.top().first;
    st.pop();
      return a;
   }
};





int  main()
{
    MinStack m;
    m.Push(-2);
    m.Push(0);
    m.Push(-3);
    cout<<m.getmin()<<endl;
    cout<<m.Pop()<<endl;
    cout<<m.getmin()<<endl;
    cout<<m.Top()<<endl;
}