#include<bits/stdc++.h>
using namespace std;

void generate(vector<string> &ans,string temp,int n,bool flag)
{
    if(temp.size()==n)
    {
        ans.push_back(temp);
        return;
    }
    generate(ans,temp+"0",n,false);
    if(!flag)
    {
        generate(ans,temp+"1",n,true);
    }
    
}
vector<string> fun(int n)
{
    vector<string> ans;
    string temp;
    generate(ans,temp,n,false);
    return ans;
}


int main()
{
    int n=3;
    vector<string> res=fun(n);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }
}