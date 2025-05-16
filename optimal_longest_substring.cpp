#include<bits/stdc++.h>
using namespace std;


int fun(string s,int n)
{
    vector<int>mpp(256,-1);
    int maxi=0;
    int l=0;
    int r=0;
    while(r<n)
    {
        if(mpp[s[r]]!=-1)
        {
           
            l=mpp[s[r]]+1;
            

        }
        mpp[s[r]]=r;
        maxi=max(maxi,r-l+1);
        r++;
    }
    return maxi;
}





int main()
{
    string s="abcabcde";
    int n=s.length();
    int ans=fun(s,n);
    cout<<ans;
}