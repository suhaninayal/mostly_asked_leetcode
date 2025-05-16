//minimum subarray sum
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={1,2,3};
    int n=3;
    int sum=0;
    int mod=int(1e+9);
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini=arr[i];
        for(int j=i;j<n;j++)
        {
            mini=min(mini,arr[j]);
            sum+=(mini)%mod;
            
        }
    }
    cout<<sum;
}