#include<bits/stdc++.h>
using namespace std;


int fruit_basket(vector<int> &arr,int n)
{
    int l=0;
    int r=0;
    int k=2;
    unordered_map<int,int>mpp;
    int maxilen=0;
    while(r<n)
    {
        mpp[arr[r]]++;

        if(mpp.size()>k)
        {
           while(mpp.size()>k)
           {
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0)
            {
                mpp.erase(arr[l]);
            }
            l++;
           }

        }
        if(mpp.size()<=k)
        {
            maxilen=max(maxilen,r-l+1);
        }
        r++;
       
        
    }
    return maxilen;
}







int main()
{
    vector<int> arr={3,3,3,1,2,1,1,2,2,3,3,4};
    int n=arr.size();
    int len=fruit_basket(arr,n);
    cout<<len;
}