//optimised approach of the question contain duplicates 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,1,2,3};
    int n=6;
    int k=2;
    bool ans;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
{
    int a=arr[i];
    if(mpp.find(a)!=mpp.end() && i-mpp[a]<=k)
    {
        ans=true;
    }
    else
    {
        mpp[a]=i;
    }
}
if(ans==true)
{
    cout<<"true";
}
else{
    cout<<"false";
}
}

