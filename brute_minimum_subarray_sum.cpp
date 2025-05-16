#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>arr;
    arr={3,1,2};
    int total=0;
    for(int i=0;i<arr.size();i++)
    {
        int mini=arr[i];
        for(int j=i;j<arr.size();j++)
        {
            for(int k=i;k<=j;k++)
            {
                mini=min(mini,arr[k]);
            }
            total+=mini;
        }
    }
    cout<<total;
}