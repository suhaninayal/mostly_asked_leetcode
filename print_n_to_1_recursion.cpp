//print n tO 1
#include<bits/stdc++.h>
using namespace std;


void fun(int i,int n)
{
    if(i==n)
    {

        return;
    }
    i++;
    fun(i,n);
    cout<<i;
}

int main()
{
    int n=5;
    fun(0,n);
    return 0;
}