
// return k largest element

#include<bits/stdc++.h>
using namespace std;


void f(vector<int> &arr,int n,int k)
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

    while(minheap.size()>0)
    {
        cout<<minheap.top();
        minheap.pop();
    }
}










int main()

{
    vector<int> arr={3,4,10,7,6,5};
    int n=arr.size();
    int k=3;
    f(arr,n,k);
    //cout<<ans;
}