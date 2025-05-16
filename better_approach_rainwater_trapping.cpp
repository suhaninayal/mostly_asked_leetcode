//better rainwater trapping
#include<bits/stdc++.h>
using namespace std;

int trapped(vector<int> &arr,int n)
{
    
    int total=0;

    int prefix[n];
    int suffix[n];
     prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=max(arr[i],prefix[i-1]);
    }
     suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=max(arr[i],suffix[i+1]);
    }

    for(int i=0;i<n;i++)
    {
       
        total+=min(prefix[i],suffix[i])-arr[i];
       
    }
    return total;
}
int main()
{
    vector<int> arr;
    arr={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=12;
    int ans=trapped(arr,n);
    cout<<ans;
}



