//sort a k sorted array
#include<bits/stdc++.h>
using namespace std;

void f(vector<int> &arr,int n,int k)
{
    vector<int> ans;
    priority_queue<int,vector<int>,greater<int>> minheap;
    for(int i=0;i<n;i++)
    {
       minheap.push(arr[i]);

       if(minheap.size()>=k+1)

       {
        ans.push_back(minheap.top());
        minheap.pop();
       }
    }
    while(minheap.size()>0)
    {
        ans.push_back(minheap.top());
        minheap.pop();
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}









int main()
{
    vector<int> arr={6,5,3,2,8,10,9};
    int n=arr.size();
    int k=3;
    f(arr,n,k);
}