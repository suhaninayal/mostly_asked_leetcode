//combination 2
#include<bits/stdc++.h>
using namespace std;

void uq_combination(int arr[],int n,vector<int> &temp,vector<vector<int>> &ans,int index,int k)
{
    if(k==0)
    {
        ans.push_back(temp);
        return;
    }
   

    for(int i=index;i<n;i++)
    {
        if(i>index && arr[i]==arr[i-1])
        {
            continue;
        }
        if(arr[i]>k)
        {
            break;
        }
        temp.push_back(arr[i]);
        uq_combination(arr,n,temp,ans,i+1,k-arr[i]);
        temp.pop_back();
    }
    
    //uq_combination(arr,n,temp,ans,index+1,k);
}
int main()
{
    int arr[]={10,1,2,7,6,1,5};
   
    vector<int> temp;
    vector<vector<int>> ans;
    
    int n=7;
    int k=8;
     sort(arr,arr+n);
    uq_combination(arr,n,temp,ans,0,k);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
    }
}