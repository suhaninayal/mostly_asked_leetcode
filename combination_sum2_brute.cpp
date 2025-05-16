#include<bits/stdc++.h>
using namespace std;

void func(vector<int> &arr,set<vector<int>> &res,vector<int> &temp,int n,int k,int ind)
{
    if(ind==n)
    {
        if(k==0)
        
        {
            res.insert(temp);
           
        }
        return;
    }

    if(k>=arr[ind])
    {
        temp.push_back(arr[ind]);
        func(arr,res,temp,n,k-arr[ind],ind+1);
        temp.pop_back();
    }
    func(arr,res,temp,n,k,ind+1);
}



set<vector<int>> fun(vector<int> &arr,int n,int k)
{
    set<vector<int>> res;
    vector<int> temp;
    func(arr,res,temp,n,k,0);
    return res;
}




int main()
{
    vector<int> arr={10,1,2,7,6,1,5};
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int k=8;
    set<vector<int>> ans=fun(arr,n,k);
    for(auto &it:ans)
    {
        for(int i:it)
        {
            cout<<i;
        }
        cout<<" ";
    }
}