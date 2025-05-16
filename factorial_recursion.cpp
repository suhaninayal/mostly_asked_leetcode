//factorial of a number
#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n,int fac)
{
    if(i==n)
    {
        cout<<fac;
    }
    fac*=i+1;
    fun(i+1,n,fac);


}

//T.C-> the time complexity will be 0(N) since the function is calling n times.
//S.C-> the space complexity will be 0(n) may be the recursion stack will be full with 
//all the function waiting to get completed.



int main()
{
    int n=3;
    int fac=1;
    fun(1,n,fac);
    return 0;
}