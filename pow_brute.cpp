#include<bits/stdc++.h>
using namespace std;
//there is a edge in the brute force solution when the n is negative you have to divide
//the 1 with the ans and the range of the int is from -2147483648 to 2147483647 
//the if you convert the negative n whci is given as -2147483648 to positive n
// which is 2147483648 then it will be the condition of 
// the overflow due to whic you have to use the long long data type


double fun(double x,int n)
{
    double res=1.0;
    for(int i=0;i<n;i++)
    {
        res=res*x;
    }
    return res;

}


int main()
{
    double x=2.0000;
    int n=10;
    double ans=fun(x,n);
    cout<<ans;
}
