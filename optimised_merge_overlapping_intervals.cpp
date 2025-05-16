//merge overlapping subintervals
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr={{1,3},{2,6},{8,10},{15,18}};
    int n=arr.size();
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++)
    {
        if(ans.empty() || arr[i][0]>ans.back()[1])
        {
            ans.push_back(arr[i]);
        }
        else
        {
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }
    for(auto it:ans)
    {
        cout<<it[0]<<it[1];
    }



}

   