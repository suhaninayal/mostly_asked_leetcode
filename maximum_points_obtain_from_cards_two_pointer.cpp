//maximum points obtain from the cards
#include<bits/stdc++.h>
using namespace std;


int fun(vector<int> &arr,int k)
{
    int maxsum=0;
    int lsum=0;
    int rsum=0;
    for(int i=0;i<k;i++)
    {
        lsum+=arr[i];
        maxsum=lsum;
    }
    int right=arr.size()-1;
    for(int i=k-1;i>=0;i--)
    {
        lsum=lsum-arr[i];
        rsum+=arr[right];
        right--;
        maxsum=max(maxsum,rsum+lsum);
    }
    return maxsum;
}
int main()
{
    vector<int> arr={6,2,3,4,7,2,1,7,1};
    int k=4;
    int ans=fun(arr,k);
    cout<<ans;
}