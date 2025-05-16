//postfix to infix
//AB-DE+F*/
#include<bits/stdc++.h>
using namespace std;

void post_to_in(string s)
{
    stack<string> st;
    int i=0;
    while(i<s.length())
    {
        char p=s[i];
        if(p>='a' && p<='z' || p>='A' && p<='Z' || p>='1' && p<='9')
        {
            st.push(string(1,p));
        }
        else
        {
            string s1=st.top();
            st.pop();
            string s2=st.top();
            st.pop();
            string d='('+s2+p+s1+')';
            st.push(d);
        }
        i++;
    }
    cout<<st.top();
}

int main()
{
    string s;
    getline(cin,s);
    post_to_in(s);
    return 0;

}