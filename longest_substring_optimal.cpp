//longest substring without the repeating character using optimal  approach
//solving the question with the two pointer approach
#include<bits/stdc++.h>
using namespace std;

int longest_substring(string s)
{
    int l=0;
    int r=0;
    int len=0;
    int maxilen=0;
    int hash[256]={-1};
    while(r<s.length())
    {
        if(hash[s[r]]!=-1)
        {
            if(hash[s[r]]>l)
            {
                l=hash[s[r]]+1;
            }

        }
        len=r-l+1;
        maxilen=max(maxilen,len);
        hash[s[r]]=r;
        r++;
    }
    return maxilen;
   
}

int main()
{
    string s;
    getline(cin,s);
    int len=longest_substring(s);
    cout<<len;
}