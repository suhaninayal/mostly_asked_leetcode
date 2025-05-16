//prefix to postfix
#include<bits/stdc++.h>
using namespace std;


void pre_to_post(string s)
{
    stack<string> st;
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
                
                st.push(s1+s2+d);
            }
            i--;
        
       
    }
     cout<<st.top();

}

int main()
{
    string s;
    getline(cin,s);
    pre_to_post(s);
    return 0;
}