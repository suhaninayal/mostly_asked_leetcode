//solving the question of maximum consecutive ones with the optimal approach which is two pointer 
#include<bits/stdc++.h>
using namespace std;

int conse_ones(vector<int> &arr,int n,int k)
{
    int l=0;
    int zeroes=0;
    int r=0;
    int len=0;
    int maxilen=0;
    while(r<n)
    {
          if(arr[r]==0)
          {
            zeroes++;
          }
          if(zeroes<=k)
          {
            len=r-l+1;
          }
         
            while(zeroes>k)
            {
                if(arr[l]==0)
                {
                    zeroes--;
                    
                }
                l++;
            }
          
        maxilen=max(maxilen,len);
        r++;

    }
    return maxilen;

}

int main()
{
    vector<int> arr={1,1,1,1,0,0,0,1,1,1,0};
    int n=arr.size();
    int k=2;
    int len=conse_ones(arr,n,k);
    cout<<len;
}



