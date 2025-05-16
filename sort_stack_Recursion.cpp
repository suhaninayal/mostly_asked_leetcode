//sort a stack using recursion
#include<bits/stdc++.h>
using namespace std;


void insert(stack<int> &st,int a)
{
    if(st.size()==0 || st.top()>=a)
    {
        st.push(a);
        return;
    }
    int t=st.top();
    st.pop();
    insert(st,a);
    st.push(t);
    return;
}
void fun(stack<int> &st)
{
    if(st.size()==1)
    {
        return;
    }
    int a=st.top();
    st.pop();
    fun(st);
    insert(st,a);
    return;
}




int main()
{
    stack<int> st;
    int n=5;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        st.push(t);

    }
    fun(st);
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}