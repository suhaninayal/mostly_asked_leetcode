//return true or false check if the sum of the subset is equal to the target
#include<bits/stdc++.h>
using namespace std;


bool fun(vector<int> &arr,int n,int k,int ind)
{
    if(k==0)
    {

        return true;
    }
    if(ind==n || k<0)
    {
        return false;
    }

    int inc=fun(arr,n,k-arr[ind],ind+1);
    int exc=fun(arr,n,k,ind+1);
    return inc|| exc;
}



int main()
{
    vector<int> arr={1,2,5};
    int k=5;
    int n=arr.size();
    bool ans=fun(arr,n,k,0);
    cout<<ans;
}