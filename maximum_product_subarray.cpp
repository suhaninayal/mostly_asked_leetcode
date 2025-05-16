//brute force appraoch
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={2,3,-8,5};
    int n=4;
    int maxi=1;
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=i;j<n;j++)
        {
             int pro=1;
            for(int k=i;k<=j;k++)
            {
                pro=pro*arr[k];
                
            }
        
            maxi=max(maxi,pro);
        }
    }
    cout<<maxi;

}