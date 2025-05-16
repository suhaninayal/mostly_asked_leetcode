///heap on hands of straight
#include<bits/stdc++.h>
using namespace std;

bool f(vector<int> &arr,int n)
{
    int k=3;

    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    priority_queue<int,vector<int>,greater<int>>minheap;

    for(int i=0;i<n;i++)
    {
        minheap.push(arr[i]);
    }

    while(!minheap.empty())
    {
        int current=minheap.top();
        minheap.pop();

       int count=mpp[current];


        for(int i=0;i<k;i++)
        {
           if(mpp[current+i]>=count)
           {
            mpp[current+i]=mpp[current+i]-count;

                 // mpp[current+i]--;
                  if(mpp[current+i]==0)
                  {
                    mpp.erase(current+i);
                  }
           }
           else
           {
            return false;
           }
        }
    }
    return true;
}









int main()
{
    vector<int> arr={1,2,3,6,2,3,4,7,8,9};
    int n=arr.size();
    bool ans=f(arr,n);
    cout<<ans;
}