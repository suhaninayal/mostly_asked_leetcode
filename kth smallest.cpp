//introduction to the heap
//kth smallest element

#include<bits/stdc++.h>
using namespace std;


int f(vector<int> &arr,int n,int k)
{
    priority_queue<int> maxheap;

    for(int i=0;i<n;i++)
    {
        maxheap.push(arr[i]);
        if(maxheap.size()>k)
        {
            maxheap.pop();
        }
    }
    return maxheap.top();
}










int main()

{
    vector<int> arr={3,4,10,7,6,5};
    int n=arr.size();
    int k=3;
    int ans=f(arr,n,k);
    cout<<ans;
}