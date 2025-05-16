//fibonnaci number
#include<bits/stdc++.h>
using namespace std;


int fun(int n)
{
     if(n<=1)
     {
        return n;
     }
    
    return fun(n-1)+fun(n-2);
}




int main()
{
    int n=5;
    for(int i=0;i<=n;i++)
    {
    cout<<fun(i);
    }

    return 0;
}