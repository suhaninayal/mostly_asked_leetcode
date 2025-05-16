#include<bits/stdc++.h>
using namespace std;

vector<int> next(int arr[],int n)
{
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        bool found=false;
        for(int j=i+1;j<i+n;j++)
        {
            int ind=j%n;
            if(arr[ind]>arr[i])
            {
                res.push_back(arr[ind]);
                found=true;
                break;
            }
           
        }
        if(!found)
        {
            res.push_back(-1);
        }
         
        
    }
    return res;
}
int main()
{
    int arr[]={1,2,3,4,3};
    int n=5;
    vector<int> ans=next(arr,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}