#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fun(vector<vector<int>> &arr,vector<int> &neww)
{
    vector<vector<int>>ans;
    int n=arr.size();
    int i=0;
    while(i<n && arr[i][1] <neww[0])

    {
        ans.push_back(arr[i]);
        i++;

    }
    while(i < n && arr[i][0] <= neww[1] && arr[i][1] >= neww[0])

    {
        neww[0]=min(neww[0],arr[i][0]);
        neww[1]=max(neww[1],arr[i][1]);
        i++;
    }
    ans.push_back(neww);
    while(i<n)
    {
        ans.push_back(arr[i]);
        i++;
    }
    return ans;
}





int main()
{
    vector<vector<int>> arr={{1,2},{3,5},{6,7},{8,10},{12,16}};
    vector<int> neww={4,8};
    vector<vector<int>> res=fun(arr,neww);
    for(auto it:res)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}