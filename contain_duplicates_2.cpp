//brute force appraoch of this question
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,1};
    int n=4;
    bool ans;
    int k=3;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && abs(i-j)<=k)
            {
                ans=true;
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