//implement atoi
#include<bits/stdc++.h>
using namespace std;


int fun(string &s,int n)
{
    long ans=0;
    if(n==0)
    {
        return 0;
    }
    int i=0;
    while(i<n && s[i]==' ')
    {
        i++;
    }

    s=s.substr(i);
    int sign=+1;

    if(s[i]=='-')
    {
        sign=-1;
    }
    int max=INT_MAX;
    int min=INT_MIN;
    if(s[0]=='+' || s[0]=='-')
    {
        i=1;
    }
    else
    {
        i=0;
    }
   // i=(s[0]=='+' || s[0]=='-') ? 1:0;//leading 0

    while(i<n)
    {
        if(s[i]==' ' || !isdigit(s[i]))
        {
            break;
        }
        ans=ans*10+s[i]-'0';
        if(sign==-1 && -1*ans<min) return min;
        if(sign==1 && ans>max) return max;
        i++;
    }
    return (int)(sign*ans);

}






int main()
{
    string s="-00042";
    int n=s.length();
    int res=fun(s,n);
    cout<<res;
}