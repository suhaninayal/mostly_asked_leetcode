//brute force approach of the question
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={3,2,4};
    vector<int> a;
    
    int n=3;
    int k=6;
  
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;i++)
        {
            if(arr[i]+arr[j]==k)
            {
                a.push_back(i);
                a.push_back(j);
            }
        }
       
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
   
    
   
}