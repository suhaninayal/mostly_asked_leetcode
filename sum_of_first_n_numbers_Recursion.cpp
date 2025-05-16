//sum of first n number
#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n,int sum)
{
     
    if(i==n)
    {
        cout<<sum;
    }
    sum+=i+1;
    fun(i+1,n,sum);
    
}

//T.C ->0(N)=since the function is called n times,we have only one prinatable line taht take 
//0(1) time
//S.C-> 0(N) in the worst case the recursion stack space would be full with all the function 
//calls waiting to get compelted and that would make it to 0(N) recursion stack space
int main()
{
    int n=5;
    int sum=0;
    fun(0,n,sum);
    return 0;
}