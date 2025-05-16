//longest substring without character repalcement
#include<bits/stdc++.h>
using namespace std;

int ch_replacement(string s)
{
    
   int maxilen=0;
  
   int k=2;
   
   for(int i=0;i<s.length();i++)
   {
      unordered_map<int,int> mp;
     int maxf=0;
    for(int j=i;j<s.length();j++)
    {
        mp[s[j]]++;
        maxf=max(maxf,mp[s[j]]);
        int changes=(j-i+1)-maxf;
        if(changes<=k)
        {
            maxilen=max(maxilen,j-i+1);
        }
        else
        {
            break;
        }
    }
   }
   return maxilen;
}





int main()
{
    string s;
    getline(cin,s);
    int len=ch_replacement(s);
    cout<<len;
}