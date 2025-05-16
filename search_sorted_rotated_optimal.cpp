//optimal appraoch of the question
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={4,5,6,7,0,1,2};
    int n=7;
    int k=19;
    int i=0;
    int j=n-1;
    bool ans=-1;
    while(i!=j)
    {
        if(arr[i]==k)
        {
            cout<<i;
            ans=0;
            break;
        }
        if(arr[j]==k)
        {
            cout<<j;
            ans=0;
            break;
        }
        i++;
        j--;
    }
    if(ans==-1)
    {
        cout<<"-1";
    }
    
}