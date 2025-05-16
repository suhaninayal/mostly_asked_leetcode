#include<bits/stdc++.h>
using namespace std;

int cele  (vector<vector<int>>&arr)
{
    int n=4,m=4;
    int top=0;
    int down=n-1;
    while(top<down)
    {
        if(arr[top][down]==1)
    {
    top++;
    }
     else if(arr[down][top]==1)
     {
    down--;
    }
    else
    {
    top++;
    down--;
     }
    }
    if(top==down)
    {
        for(int i=0;i<n;i++)
        {
            if(i==top)
            {
                continue;
            }
            if(arr[top][i]==0 && arr[i][top]==1)
            {
                  i++;
            }
            else
            {
                cout<<"-1";
                return 0;
            }
        }
    }
    return top;
}

int main()
{
    int n=4,m=4;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ans=cele(arr);
    cout<<ans;
}