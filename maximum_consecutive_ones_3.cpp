//maximum consecutive ones III
#include<bits/stdc++.h>
using namespace std;

int count_ones(vector<int> &arr,int n,int k)
{
    int maxilen=0;
    int len=0;
    int zeroes=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
              if(arr[j]==0)
              {
                zeroes++;
              }

              if(zeroes>k)
              {
                break;
              }
              else
              {
                len=j-i+1;
              }
              maxilen=max(maxilen,len);
        }
    }
    return maxilen;
}

int main()
{

    vector<int> arr={1,1,1,1,0,0,0,1,1,0};
    int n=arr.size();
    int k=2;
    int len=count_ones(arr,n,k);
    cout<<len;
    }