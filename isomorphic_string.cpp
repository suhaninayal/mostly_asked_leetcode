//isomorphic string
#include<bits/stdc++.h>
using namespace std;



bool fun(string s,string t)
{
    unordered_map<char,char>mpp;

    if(s.size()!=t.size())
    {
        return false;
    }
    for(int i=0;i<s.length();i++)
    {
       if(i>0 ||mpp.find(s[i])!=mpp.end())
       {
           if((s[i-1]!=s[i] &&mpp[s[i-1]]==t[i]) || (s[i]==s[i-1] && mpp[s[i-1]]!=t[i]))
           {
            return false;
           }
         

       }
       mpp[s[i]]=t[i];
    }
    return true;
}




int main()
{
    string s="egg";
    string t="abd";
    bool ans=fun(s,t);
    cout<<ans;
}