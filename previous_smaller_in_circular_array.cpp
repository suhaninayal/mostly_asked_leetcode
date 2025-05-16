//previous smaller element in the circular array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    arr={3,4,1,2};
    int n=4;
    stack<int> st;
    vector<int> ans(n,-1);

    for(int i=2*n-1;i>=0;i++)
    {
      while(!st.empty() && arr[i%n]<=arr[st.top()])
      {
        st.pop();
      }
    
      if(!st.empty())
      {
       ans[i%n]=arr[st.top()];
      
     }
     
      st.push(i%n);
     
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}