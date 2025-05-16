//optimised approch of the question
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> twosum(vector<int>&arr,int k,int n)
{
 unordered_map<int,int>mpp;
 vector<pair<int,int>>a;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]=i;
    }
    int ans;
    for(int i=0;i<n;i++)
    {
        ans=k-arr[i];
        if(mpp.find(ans)!=mpp.end() && mpp[ans]!=i)
        {
           a.push_back({i,mpp[ans]});
           
           break;
        }
       
    }
    return a;
}
int main()
{
    vector<int>arr={3,2,4};
   
    
    int n=3;
    int k=6;
   vector<pair<int,int>>r=twosum(arr,k,n);
    for(int i=0;i<r.size();i++)
    {
        cout<<r[i].first<<r[i].second;
    }
   
    
   
}