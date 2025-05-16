#include<bits/stdc++.h>
using namespace std;


void func(vector<int> &arr,vector<int> &res,int sum,int ind,int n)
{
    if(ind==n)
    {
        res.push_back(sum);
        return;
    }
    func(arr,res,sum+arr[ind],ind+1,n);
    func(arr,res,sum,ind+1,n);
}
vector<int> fun(vector<int> &arr,int n)
{
   
    vector<int> res;
    int sum=0;
    func(arr,res,sum,0,n);
    sort(res.begin(),res.end());
    return res;
}


int main()
{
    vector<int> arr={5,2,1};
    int n=arr.size();
    vector<int> ans=fun(arr,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
  
}