//previous greater element in the array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    arr={3,4,1,2};
    int n=4;
    stack<int> st;
    vector<int> ans(n,-1);

    for(int i=0;i<n;i++)
    {
      while(!st.empty() && arr[i]>=st.top())
      {
        st.pop();
      }
     
      if(!st.empty())
      {
       ans[i]=st.top();
      }
     
      st.push(arr[i]);
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}