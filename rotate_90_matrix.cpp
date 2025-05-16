//brute rotate matrix 90
#include<bits/stdc++.h>
using namespace std;




int main()
{
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int n=arr.size();
    vector<vector<int>>dummy(n,vector<int> (n,0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dummy[j][n-i-1]=arr[i][j];
        }
    }
  //cout<<"working";
    for(int i=0;i<dummy.size();i++)
{
    for(int j=0;j<dummy[0].size();j++)
{
    cout<<dummy[i][j]<<" ";
}
cout<<endl;
}

//cout<<"done";
return 0;
}