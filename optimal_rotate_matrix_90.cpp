//optimal transpose rotate matrix 90
#include<bits/stdc++.h>
using namespace std;




int main()
{
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int n=arr.size();
    vector<vector<int>>dummy(n,vector<int> (n,0));

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
  

//reverse

for(int i=0;i<n;i++)
{
   reverse(arr[i].begin(),arr[i].end());
}


for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)

    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}