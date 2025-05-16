//longest substring without the repeating character using brute force approach
#include<bits/stdc++.h>
using namespace std;

int longest_substring(string s)
{
    int n=s.length();
    int len=0;
    int maxilen=0;
    int hash[256]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(hash[s[j]]==1)
            {
                break;
            }
                len=j-i+1;
            maxilen=max(maxilen,len);
            hash[s[j]]=1;

        }
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