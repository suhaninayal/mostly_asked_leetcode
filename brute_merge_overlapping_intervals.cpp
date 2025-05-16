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
        int start=arr[i][0];
        int end=arr[i][1];
        if(!ans.empty() && end<=ans.back()[1])
        {
            continue;
        }

        for(int j=i+1;j<n;j++)
        {
            if(arr[j][0]<=end)
            {
                end=max(end,arr[j][1]);
            }
            else
            {
                break;
            }
        }
        ans.push_back({start,end});
    }
    for(auto it:ans)
    {
        cout<<it[0]<<it[1];
    }
}