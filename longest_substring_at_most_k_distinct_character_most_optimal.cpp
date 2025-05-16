//longest substring with at most k distinct characters
#include<bits/stdc++.h>
using namespace std;


int count(string s)
{
    int k=2;
    int maxilen=0;
    int l=0;
    int r=0;
    unordered_map<int,int>mpp;
    while(r<s.length())
    {
        mpp[s[r]]++;
        if(mpp.size()<=k)
        {
            maxilen=max(maxilen,r-l+1);
        }
        if(mpp.size()>k)
        {
            mpp[s[l]]--;
            
            if(mpp[s[l]]==0)
            {
                mpp.erase(s[l]);
            }
            l++;
        }
        r++;
    }
    return maxilen;
}








int main()
{
    string s;
    getline(cin,s);
    int len=count(s);
    cout<<len;
}