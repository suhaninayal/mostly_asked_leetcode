//optimised approach of the question stock buy and sell
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={7,6,4,3,1};
    int n=5;
    int mini=INT_MAX;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
    mini=min(mini,arr[i]);//----->buy
    maxi=max(maxi,arr[i]-mini); 
   }
   cout<<maxi;
   
}