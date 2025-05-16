//combination sum 
#include<bits/stdc++.h>
using namespace std;
void combination(int arr[],vector<int> &temp,vector<vector<int>>&ans,int n,int index,int k)
{
   
        if(k==0)
        {
            ans.push_back(temp);
            return;
        }
    if(n==index || k<0)
    {
        return;
    }
    if(arr[index]<=k)
    {
    temp.push_back(arr[index]);
    combination(arr,temp,ans,n,index,k-arr[index]);
    temp.pop_back();
    }
    combination(arr,temp,ans,n,index+1,k);
}

int main()
{
    int arr[]={2,3,6,7};
    int n=4;
    vector<vector<int>>ans;
    vector<int> temp;
    int k=7;
    combination(arr,temp,ans,n,0,k);
    for(int i=0;i<ans.size();i++)

    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}