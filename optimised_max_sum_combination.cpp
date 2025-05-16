//max sum conbination heap
#include<bits/stdc++.h>
using namespace std;

vector<int> f(vector<int> &arr,vector<int> &brr,int n,int m)
{
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    priority_queue<pair<int,pair<int,int>>>maxheap;
    set<pair<int,int>>s;
    vector<int> ans;
    maxheap.push({arr[n-1]+brr[m-1],{n-1,m-1}});
    s.insert({n-1,m-1});
    int k=4;
    while(k>0)
    {
        auto p=maxheap.top();
        int sum=p.first;
        int i=p.second.first;
        int j=p.second.second;
        ans.push_back(sum);
        maxheap.pop();

        if(s.find({i-1,j})==s.end())
        {
            maxheap.push({arr[i-1]+brr[j],{i-1,j}});
            s.insert({i-1,j});
        }
        if(s.find({i,j-1})==s.end())
        {
            maxheap.push({arr[i]+brr[j-1],{i,j-1}});
            s.insert({i,j-1});
        }
        k--;
    }
    return ans;

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