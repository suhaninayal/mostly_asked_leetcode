//implementing minstack 0(2N) and 0(N) space complexity

#include<bits/stdc++.h>
using namespace std;

class MinStack
{
    stack<pair<int,int>>st;

    public:
    void Push(int x)
    {
        int mini;
        if(st.empty())
        {
            mini=x;
        }
        else
        {
            mini=min(st.top().second,x);
        }
        st.push({x,mini});
    }

    void pop()
    {
        st.pop();
    }
    int top()
    {
        return st.top().first;
    }
    int getmin()
    {
        return st.top().second;
    }
};

int main()
{
    MinStack m;
    m.Push(2);
    m.Push(1);
    m.Push(8);
    cout<<"the top is "<<m.top();
    cout<<"the min is"<<m.getmin();
    

}