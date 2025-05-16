#include<bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> &arr,int n,int k)
{
    vector<int> ans;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    priority_queue<pair<int,int>>maxheap;
    for(auto it:mpp)
    {
        maxheap.push({it.second,it.first});
    }
    while(k!=0 && !maxheap.empty())
    {
        ans.push_back(maxheap.top().second);
        maxheap.pop();
        k--;
    }
    return ans;
}





int main()
{
    vector<int> arr={1,2,2,3,3,3,3};
    int n=arr.size();
    int k=2;
    vector<int> res=fun(arr,n,k);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}