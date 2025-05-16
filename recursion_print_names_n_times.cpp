#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n)
{

    if(i==n)
    {
        return ;
    }
    cout<<"suhani"<<" ";
    i++;
    fun(i,n);
}






int main()
{
    int n=5;
    fun(0,n);
    return 0;
}
