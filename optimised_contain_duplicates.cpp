//optimised approach of the question==>>using hashing
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,4};
    int n=4;
    unordered_map<int,int>mpp;
    bool ans;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    int an=2;
    for(int j=0;j<n;j++)
    {
        if(mpp[arr[j]]==an)
        {
            ans=true;
            break;
        }
    }
    if(ans==true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

}