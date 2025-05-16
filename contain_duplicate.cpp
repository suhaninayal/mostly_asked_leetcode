//brute force approach of this question
#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool ans;
    vector<int> arr={1,2,3,4};
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ans=true;
                break;
            }
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