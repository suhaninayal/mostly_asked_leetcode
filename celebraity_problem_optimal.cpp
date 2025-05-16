#include<bits/stdc++.h>
using namespace std;


int fun(vector<vector<int>> &arr,int n,int m)
{
    int top=0;
    int bottom=n-1;
    while(top<bottom)
    {
        if(arr[top][bottom]==1)
        {
            top++;
        }
        else if(arr[bottom][top]==1)
        {
            bottom--;
        }
        else 
        {
            top++;
            bottom--;
        }
    }

    while(top<bottom)
    {
        return -1;
    }

    if(top==bottom)
    {
       
        for(int i=0;i<arr[0].size();i++)
        {
            if(top!=i && arr[top][i]==1)
            {
                return-1;
            }

        }
        return top;
    }
}






int main()
{
    vector<vector<int>> arr={{0,1,1,0},{0,0,0,0},{1,1,0,0},{0,1,1,0}};
    int n=arr.size();
    int m=arr[0].size();
    int val=fun(arr,n,m);
    cout<<val;
}