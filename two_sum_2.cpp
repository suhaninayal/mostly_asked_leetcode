//brute force approach is same as the two sum problem
//optimised approach
//array is sorted and array indexed is starting from 1
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={2,7,11,15};
    vector<int>a;
    int n=4;
    int k=9;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]=i;

    }

    for(int i=0;i<n;i++)
    {
        int ans=k-arr[i];
        if(mpp.find(ans)!=mpp.end()&& mpp[ans]!=i)
        {
            a.push_back(i+1);
            a.push_back(mpp[ans]+1);
            break;

        }
    }
  for(int i=0;i<a.size();i++)
  {
    cout<<a[i];
  }
}