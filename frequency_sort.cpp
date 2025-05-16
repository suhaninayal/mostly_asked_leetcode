//using heap to find the top k frequent numbers
#include<bits/stdc++.h>
using namespace std;

vector<int> f(vector<int> &arr,int n,int k)
{
    vector<int> ans;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

   //priority_queue<pair<int, int>, vector<pair<int, int>>, greater>> minheap;
   priority_queue<pair<int, int> >maxheap;



    for(auto it:mpp)
    {
        maxheap.push({it.second,it.first});

       
    }

    while(maxheap.size()>0)
    {
        int fre=maxheap.top().first;
        int ele=maxheap.top().second;
       for(int i=1;i<=fre;i++)
       {
        ans.push_back(ele);
       }
       maxheap.pop();
    }
    return ans;
}










int main()

{
    vector<int> arr={1,1,1,3,2,2,4,4,4,4};
    int n=arr.size();
    int k=2;
    vector<int> ans=f(arr,n,k);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}