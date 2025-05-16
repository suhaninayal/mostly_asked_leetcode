//combination sum-III
#include<bits/stdc++.h>
using namespace std;

void func(vector<vector<int>> &res,vector<int> &temp,int n,int k,int ind,int sum)
{
    if(sum==n && k==0)
    {
        res.push_back(temp);
        return;
    }

    if(sum>n)
    {
        return;
    }
     
    for(int i=ind;i<=9;i++)

    {
        temp.push_back(i);
        func(res,temp,n,k-1,i+1,sum+i);
        temp.pop_back();
    }
}

vector<vector<int>> fun(int n,int k)
{
    vector<vector<int>> res;
    vector<int> temp;
    int sum=0;
    func(res,temp,n,k,1,0);
    return res;
}

int main()
{
    int n=9;
    int k=3;
    vector<vector<int>> ans=fun(n,k);
    for(auto it:ans)

    {
        for(auto i:it)
        {
            cout<<i<<"";
        }
        cout<<" ";
    }
}