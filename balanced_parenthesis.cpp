//balanced parenthesis
#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin,s);
    stack<char>st;
   for(auto i:s)
   {
    if(i=='(' || i=='[' || i=='{')
    {
        st.push(i);
    }
    else
    {
        if(st.size()==0)
        {
            cout<<"false";
            return 0;
        }
    
    char ch=st.top();
    st.pop();
    if(i==')' || i==']' || i=='}')
    {
        continue;
    }
    else
    {
        cout<<"false";
        return 0;
    }
   
   }

}

if(st.empty())
{
    cout<<"true";
}
else
{
    cout<<"false";
}
}