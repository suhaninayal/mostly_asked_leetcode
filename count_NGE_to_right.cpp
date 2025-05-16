#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> arr;
    arr={2,3,1,4};
    int n=4;
    vector<int>ans;
    vector<int>indices={0,3};
    int queries=2;
    int count=0;
    for(int i=0;i<queries;i++)
    {
        count=0;
        int j=indices[i];
        for(int k=j;k<n;k++)
        {
            if(arr[j]<arr[k])
            {
                count++;
            }
        }
        ans.push_back(count);
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}