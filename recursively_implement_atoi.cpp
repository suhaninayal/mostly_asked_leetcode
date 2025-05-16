//recursive appraoch implement atoi
#include<bits/stdc++.h>
using namespace std;

int fun(string s,int n)
{
   // int res=0;
    if(n==0)
    {
        return s[n]-'0';
    }

    int smallans=fun(s,n-1);
    int a=s[n]-'0';
    return smallans*10+a;
}






int main()
{
    string s="1234";
    int n=s.length();
    int ans=fun(s,n-1);
    cout<<ans;
}