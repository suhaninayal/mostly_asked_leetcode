#include<bits/stdc++.h>
using namespace std;

int fun(string s,int n)
{
    int count=0;
    int maxicount=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            count++;
            
        }
        maxicount=max(maxicount,count);

         if(s[i]==')')
        {
            count--;
        }
    }
    return maxicount;
}





int main()
{
    string s="(1+(2*3)+((8)/4))+1";
    int n=s.length();
    int ans=fun(s,n);
    cout<<ans;
}