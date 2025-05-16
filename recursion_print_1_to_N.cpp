//print 1 to N
#include<bits/stdc++.h>
using namespace std;


void fun(int i,int n)
{
    if(i==n)
    {
        return;
    }
    cout<<i+1;
    i++;
    fun(i,n);

}



int main()
{
    int n=5;
    fun(0,n);
    return 0;
}