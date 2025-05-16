//celebrity problem
#include<bits/stdc++.h>
using namespace std;

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

    vector<int> known_me(n);
    vector<int> i_know(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1)
            {
                known_me[j]++;
                i_know[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(known_me[i]==n-1 && i_know[i]==0)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}