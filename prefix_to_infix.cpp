//prefix to infix
//*+pq-mn
//in this we will start from the end;
#include<bits/stdc++.h>
using namespace std;


void prefix_to_infix(string s)
{
   stack<string>st;
   int i=s.length()-1;
   while(i>=0)

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
        string f='('+s1+d+s2+')';
        st.push(f);
    }
    i--;
   }

   cout<<st.top();
}


int main()
{
    string s;
    getline(cin,s);
    prefix_to_infix(s);
    return 0;
}