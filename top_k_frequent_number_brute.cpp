//top k frequent number
//using brute force method

#include<bits/stdc++.h>
using namespace std;


vector<int> f(vector<int> &arr,int n,int k)
{  vector<int> ans;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(mpp[i]>1)
        {
            ans.push_back(i);
        }
        if(ans.size()>k)
        {
            break;
        }
    }
    return ans;
    
}


int main()
{
    vector<int> arr={1,1,1,3,2,2,4};
    int n=arr.size();

    int k=2;
    vector<int> ans=f(arr,n,k);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
  
}