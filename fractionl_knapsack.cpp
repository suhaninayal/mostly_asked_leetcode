#include<bits/stdc++.h>
using namespace std;


int fun(vector<vector<int>> &arr,int W,int n)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        if(W>=arr[i][1])
        {
             total+=arr[i][0];
             W-=arr[i][1];
        }
        else
        {
            total+=((double)arr[i][0]/arr[i][1])*W;
        }
    }
    return total;

}

bool comp(vector<int> &a,vector<int> &b)
{
    return (double)a[0]/a[1] > (double)b[0]/b[1];
}
int main()
{
    vector<vector<int>> arr={{100,20},{60,10},{120,30}};
    int n=arr.size();
    int W=50;
    sort(arr.begin(),arr.end(),comp);
    int total=fun(arr,W,n);
    cout<<total;
}