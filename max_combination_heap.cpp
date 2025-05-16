//max sum conbination heap
#include<bits/stdc++.h>
using namespace std;

vector<int> f(vector<int> &arr,vector<int> &brr,int n,int m)
{
    int c=4;
    priority_queue<int>maxheap;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=arr[i]+brr[j];
            maxheap.push(sum);
        }
    }
   vector<int>temp;
    while(c>0)
    {
       temp.push_back(maxheap.top());
       maxheap.pop();
       c--;
    }
    return temp;
}










int main()
{
    vector<int> arr={1,4,2,3};
    vector<int> brr={2,5,1,6};
    int n=arr.size();
    int m=brr.size();
    vector<int> ans=f(arr,brr,n,m);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}