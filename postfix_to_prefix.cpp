//postfix to prefix
//ab-de+f*/
#include<bits/stdc++.h>
using namespace std;


void postfix_to_infix(string s)
{
    stack<string> st;
    int i=0;
    while(i<s.length())
    {
        char d=s[i];
        if(d>='a' && d<='z' || d>='A' && d<='Z' || d>='0' && d<='9')
        {
            st.push(string(1,d));
        }
        else
        {
            string s1=st.top();
            st.pop();
            string s2=st.top();
            st.pop();
            string f=d+s2+s1;
            st.push(f);
        }
        i++;
    }
    cout<<st.top();
}

int main()
{
    string s;
    getline(cin,s);
    postfix_to_infix(s);
    return 0;
}