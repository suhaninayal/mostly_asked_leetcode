//brute force appraoch of the question
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={4,5,6,7,0,1,2};
    int n=7;
    int k=1;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==k)
       {
        cout<<i;
        break;
       }
    }
}