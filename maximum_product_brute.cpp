//maximum product subarray
//brute force approach
#include<bits/stdc++.h>
using namespace std;


int f(vector<int> &arr,int n)
{
    int pro=0;
    int maxpro=INT_MIN;
    for(int i=0;i<n;i++)
    {
        pro=arr[i];
        for(int j=i+1;j<n;j++)
        {
            pro=pro*arr[j];
            maxpro=max(maxpro,pro);
            
        }
    }
    return maxpro;
}








int main()
{
    vector<int> arr={1,2,-3,-9,0,-4,-5};
    int n=arr.size();
    int ans=f(arr,n);
    cout<<ans;
}