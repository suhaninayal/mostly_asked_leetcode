//largest rectangle in a histograph
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={2,3,5,6,7};
    int n=5;
    stack<int> st;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && arr[i]<arr[st.top()])
        {
            int ele=st.top();
            st.pop();
        
        int nse=i;
        int pse;
        if(st.empty())
        {
            pse=-1;
        }
        else
        {
            st.top();
        }
        maxi=max(maxi,arr[ele]*(nse-pse-1));

    }
    st.push(i);
    }
    while(!st.empty())
    {
        int nse=n;
        int ele=st.top();
        st.pop();
        int pse;
        if(st.empty())
        {
             pse=-1;

        }
        else
        {
            pse=st.top();
        }
        maxi=max(maxi,(nse-pse-1)*arr[ele]);
    }
    cout<<maxi;
}