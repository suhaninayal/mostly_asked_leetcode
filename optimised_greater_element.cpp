//optimised next greater element
#include<bits/stdc++.h>
using namespace std;

vector<int> nge(int arr[],int n)
{
    stack<int> st;
    vector<int> ans;

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[i]>=st.top())
        {
            st.pop();
        }
        if(st.empty())
        {
            ans.push_back(-1);

        }
        else
        {
            ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    return ans;
}

int main()
{
    int arr[]={6,0,8,1,3};
    int n=5;
    vector<int>res=nge(arr,n);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }

}