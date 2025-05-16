#include<bits/stdc++.h>
using namespace std;

bool f(string &s,int index,int count)
{
    if(count<0)
    {
        return false;
    }
    if(s.length()==index)
    {
             if(count==0)
             {
                return true;
             }
            else
            {
                return false;
            }
        
       
    }
    if(s[index]=='(')
    {
        return f(s,index+1,count+1);
    }
    if(s[index]==')')
    {
        return f(s,index+1,count-1);
    }

    return f(s,index+1,count+1) || f(s,index+1,count-1) || f(s,index+1,count);
    
}

bool fun(string &s)
{
    int count=0;
    bool a=f(s,0,count);
    return a;

}

int main()
{
    string s="(*)";
    
    bool ans=fun(s);
    cout<<ans;
}