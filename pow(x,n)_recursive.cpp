//pow(x,n) with the optimised appraoch
//suppose 2^10=(2*2)^5=(4)^5 // if 10 %2 ==0 then 2 will multiply by itself and power 
// will divided by 2
//(4)^5 =(4*4^4) //if 5%2==1 then res will multiply by 4 and power will reduce by 1










#include<bits/stdc++.h>
using namespace std;


double fun(double x,int n)
{
    double res=1.0;
    long long nn=n;
    if(nn<0)
    {
        nn=-1*nn;
    }

    while(nn)
    {
        if(nn%2==1)
        {
            res=res*x;
            nn=nn-1;
        }
        else
        {
            x=x*x;
            nn=nn/2;
        }
    }
    if(n<0)
    {
        res=(double)(1.0)/(double)(res);
    }
    return res;
}




int main()
{
    double x=2.000;
    int n=5;
    double ans=fun(x,n);
    cout<<ans;
}