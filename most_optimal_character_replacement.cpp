#include<bits/stdc++.h>
using namespace std;

int ch_replace(string s)
{
    int l=0;
    int k=2;
    int r=0;
    int changes;
    int maxfre=0;
    int maxilen=0;
    unordered_map<int,int> mp;
    while(r<s.length())
    {
        mp[s[r]]++;
        maxfre=max(maxfre,mp[s[r]]);
        changes=(r-l+1)-maxfre;
        if(changes<=k)
        {
            maxilen=max(maxilen,r-l+1);
        }

        if(changes>k)
        {
           mp[s[l]]--;
           l++;
           maxfre=max(maxfre,mp[s[r]]);
           changes=(r-l+1)-maxfre;
           if(changes<=k)
           {
            maxilen=max(maxilen,r-l+1);
           }
           
        }

        r++;


    }
    return maxilen;
}





int main()
{
    string s;
    getline(cin,s);
    int len=ch_replace(s);
    cout<<len;
}