//longest substring with at most k distinct characters
#include<bits/stdc++.h>
using namespace std;


int count(string s)
{
    int k=2;
    int maxilen=0;
    for(int i=0;i<s.length();i++)
    {
        set<int> st;
        for(int j=i;j<s.length();j++)
        {
            st.insert(s[j]);
            if(st.size()<=k)
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
    int len=count(s);
    cout<<len;
}