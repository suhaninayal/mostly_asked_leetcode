#include<bits/stdc++.h>
using namespace std;
vector<int> nse(vector<int> &arr,int n)
{
     vector<int> a(n);
    stack<int> st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[i]<=arr[st.top()])
        {
            st.pop();
        }
        if(st.empty())
        {
            a[i]=n;
        }
        else
        {
            a[i]=st.top();
        }
        st.push(i);
    }
    return a;
}

vector<int> pse(vector<int> &arr,int n)
{
    vector<int>b(n);
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && arr[i]<arr[st.top()])
        {
            st.pop();
        }
        if(st.empty())
        {
            b[i]=-1;
        }
        else
        {
            b[i]=st.top();
        }

        st.push(i);
    }
    return b;

}

int main()
{
    vector<int>arr={3,2,1};
    int n=3;
    vector<int> ns=nse(arr,n);
   vector<int> ps=pse(arr,n);
    int mod=(1e9+7);
    int left=0;
    int right=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        left=i-ps[i];
        right=ns[i]-i;
        sum=(sum+(left*right*arr[i])%mod)%mod;
    }
   cout<<sum;
}