//brute force appraoch of the question
#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> arr={7,1,5,3,6,4};
   int n=6;
   int maxi=0;
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        int a=arr[j]-arr[i];
        if(a>maxi)
        {
            maxi=a;
        }
    }
   }
   cout<<maxi;
}