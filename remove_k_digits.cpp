#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string res;
    int k=3;
   
    stack<char> st;
    
    for(int i=0;i<s.size();i++)
    {
        while(!st.empty() && k>0 && (st.top()-'0')>(s[i]-'0'))
        {
           
            st.pop();
            k--;
            
        }
        
        st.push(s[i]);
    }
     while(k>0 && !st.empty())
     {
        st.pop();
        k--;
     }

  
     while(!st.empty())
     {
        res+=st.top();
        st.pop();
     }
    
    reverse(res.begin(),res.end());

    while(res.size()>1 && res[0]=='0')
    {
        res.erase(res.begin());
    }


    if(res.empty())
    {
        cout<<"0";
    }
    else
    {
        cout<<res;
    }
   



}