#include<bits/stdc++.h>
using namespace std;

void valid(int open,int close,vector<string> &res,string output)
{
    if(open==0 && close==0)
    {
        res.push_back(output);
        return;
    }
    if(open!=0)
    {
        string op1=output;
        op1.push_back('(');
        valid(open-1,close,res,op1);

    }

    if(close>open)
    {
        string op2=output;
        op2.push_back(')');
        valid(open,close-1,res,op2);
    }
    return;
}

vector<string> fun(int n)
{
    vector<string>res;
    string output;
    int open=n;
    int close=n;
    valid(open,close,res,output);
    return res;
}






int main()
{
    int n=2;
    vector<string> ans=fun(n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}