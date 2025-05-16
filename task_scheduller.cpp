//task scheduller
#include<bits/stdc++.h>
using namespace std;

int f(string s,int n)
{
    vector<int> mpp(26,0);
    for(int i=0;i<s.length();i++)
    {
        mpp[s[i]-'A']++;
    }

    priority_queue<int> maxheap;
    for(auto it:mpp)
    {
        if(it>0)
        {
        maxheap.push(it);
        }
    }

    int time=0;
    while(!maxheap.empty())
    {
         vector<int> temp;
        for(int i=1;i<=n+1;i++)
        {
            if(!maxheap.empty())
            {
       
        int fre=maxheap.top();
        maxheap.pop();
        fre--;
        temp.push_back(fre);
        }
        }


        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]>0)
            {
                maxheap.push(temp[i]);
            }
        }

        if(maxheap.empty())
        {
            time+=temp.size();
        }
        else
        {
           time+=n+1;
        }

    }
    return time;


}











int main()
{
    string s="AAABBB";
    int n=2;
    int ans=f(s,n);
    cout<<ans;
}