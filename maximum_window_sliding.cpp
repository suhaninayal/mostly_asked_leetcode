#include<bits/stdc++.h>
using namespace std;


vector<int> fun(vector<int> &arr,int n,int k)
{
    int maxi=0;
    vector<int> a;
    
    for(int i=0;i<n-k;i++)
    {
       
      
        maxi=arr[i];
        for(int j=i;j<i+k-1;j++)
        {
            maxi=max(maxi,arr[j]);
        }
       
        a.push_back(maxi);
        
    }
    return a;
}
int main()
{
    vector<int> arr={1,3,-1,-3,5,3,2,1,6};
    int n=9;
    int k=3;
    vector<int> ans=fun(arr,n,k);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}