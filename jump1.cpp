//jump 1 ---------------->greedy algorithm
#include<bits/stdc++.h>
using namespace std;

bool jump(vector<int> &arr,int n)
{
    int index=0;
    int maxindex=0;
    for(int i=0;i<n;i++)
    {
        index=arr[i]+i;
        if(i<=maxindex)
        {
            if(maxindex<index)
            {
          maxindex=index;
        }
        }
        else
        {
            return false;
        }

    }
    return true;
}



int main()
{
    vector<int> arr={1,2,4,1,1,0,2,5};
    int n=arr.size();
    bool ans=jump(arr,n);
    cout<<ans;
}