//optimised rainwater trapping

#include<bits/stdc++.h>
using namespace std;

int trapped(vector<int> &arr,int n)
{
    int leftmax=0,rightmax=0;
    int l=0;
    int r=n-1;
    int total=0;
    
          while(l<=r)
          {
            if(arr[l]<=arr[r])
            {
                if(arr[l]>=leftmax)
                {
                    leftmax=arr[l];

                }
                else
                {
                    total+=leftmax-arr[l];
                }
                l++;
            }
            else
            {
                if(arr[r]>=rightmax)
                {
                    rightmax=arr[r];
                }
                else
                {
                    total+=rightmax-arr[r];
                }
                r--;
            }

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