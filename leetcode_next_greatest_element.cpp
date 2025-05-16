//optimised next greater element
#include<bits/stdc++.h>
using namespace std;


vector<int> nge(int arr1[],int arr2[])
{
    stack<int> st;
    vector<int> ans;
    
    for(int i=3-1;i>=0;i--)
    {
        int j=3-1;
        while(arr1[i]!=arr2[j])
        {
            st.push(arr2[j]);
            j--;
        }
        while(!st.empty() && arr1[i]>=st.top())
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
       // st.push(arr2[j]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int arr1[]={2,1,3};
    int arr2[]={2,3,1};
    vector<int>res=nge(arr1,arr2);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }

}