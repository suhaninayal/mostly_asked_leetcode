//maximum product subarray
//brute force approach
#include<bits/stdc++.h>
using namespace std;


int f(vector<int> &arr,int n)
{
   int maxi=INT_MIN;
   int maxpro=INT_MIN;
   int suff=arr[0];
   int pre=arr[n-1];
   for(int i=1;i<n;i++)
   {
     suff=suff*arr[i];
     pre=pre*arr[n-i-1];
     maxi=max(suff,pre);
     maxpro=max(maxi,maxpro);
   }
   return maxpro;

}








int main()
{
    vector<int> arr={1,2,-3,0,20,-1,-3,-5};
    int n=arr.size();
    int ans=f(arr,n);
    cout<<ans;
}