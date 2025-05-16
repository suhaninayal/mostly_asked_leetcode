//introduction to the heap
//kth largest element

#include<bits/stdc++.h>
using namespace std;


int f(vector<int> &arr,int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> minheap;

    for(int i=0;i<n;i++)
    {
        minheap.push(arr[i]);
        if(minheap.size()>k)
        {
            minheap.pop();
        }
    }
    return minheap.top();
}










int main()

{
    vector<int> arr={3,4,10,7,6,5};
    int n=arr.size();
    int k=3;
    int ans=f(arr,n,k);
    cout<<ans;
}