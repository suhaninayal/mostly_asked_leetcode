//generating all the subset of the given array
#include<bits/stdc++.h>
using namespace std;
void generate_subset(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>&temp)
{
    
    if(index==n)
    {
        ans.push_back(temp);
        return ;

    }
    //generate_subset(arr,index+1,n,ans,temp);
    temp.push_back(arr[index]);
    generate_subset(arr,index+1,n,ans,temp);
    temp.pop_back();
    generate_subset(arr,index+1,n,ans,temp);

}
int main()
{
    int arr[]={1,2,3};
    vector<vector<int>>ans;
    vector<int> temp;
    int n=3;
   generate_subset(arr,0,n,ans,temp);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}