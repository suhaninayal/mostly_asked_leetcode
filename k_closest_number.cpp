//find the k closet number
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={5,6,7,8,9};
    int n=arr.size();
    int k=3;
    vector<int> ans;
    int x=7;
    priority_queue<pair<int,int>> maxheap;

    for(int i=0;i<n;i++)
    {
        maxheap.push({abs(x-arr[i]),arr[i]});

        if(maxheap.size()>k)
        {
            maxheap.pop();
        }
    }

    while(maxheap.size()>0)
    {
       //cout<<maxheap.top().second;
       ans.push_back(maxheap.top().second);
        maxheap.pop();
    }
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i];
  }
    
}