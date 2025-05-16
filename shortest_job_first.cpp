//shortest job first
#include<bits/stdc++.h>
using namespace std;

int sjf(vector<int> &arr,int n)
{
    int time=0;
    int wt=0;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++)
    {
       
        time+=arr[i-1];
         wt+=time;
        
    }
    return (wt/n);
}










int main()
{

    vector<int> arr={1,2,3,4,7};
    int n=arr.size();
    int ans=sjf(arr,n);
    cout<<ans;
}