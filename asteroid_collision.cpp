#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>arr;
    arr={8,7,2,-3,8,7};
    int n=6;
    list<int> ls;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            ls.push_back(arr[i]);
        }
        else
        {
            while(!ls.empty() && ls.back()>0 && ls.back()<abs(arr[i]))
            
            {
                ls.pop_back();
                

            }
        
        if(!ls.empty() && ls.back()==abs(arr[i]))
        {
            ls.pop_back();
            
        }
        else if(ls.empty() || ls.back()<0)
        {
               ls.push_back(arr[i]);
        }
    }
    }
     for(auto it=ls.begin();it!=ls.end();++it)
    {
        cout<<*it;
    }

   
}