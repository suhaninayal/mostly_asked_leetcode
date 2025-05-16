//optimal appraoch for handling negative and zeros numbers in the array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={2,3,-8,5};
    int pro=arr[0];
    int left=arr[0];
    int right=arr[0];
    if(arr.size()==0)
    {
        cout<<"0";
    }
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]<0)
        {
            swap(left,right);
        }

        left=max(arr[i],arr[i]*left);
        right=min(arr[i],arr[i]*right);


        pro=max(pro,left);
    }
    cout<<pro;
    
}