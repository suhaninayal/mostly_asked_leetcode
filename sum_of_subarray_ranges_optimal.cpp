//sum of subarray ranges;
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
vector<int> nge(vector<int> &arr,int n)
{
    vector<int> c(n);
    stack<int> st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]<=arr[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            c[i]=n;

        }
        else
        {
            c[i]=st.top();
        }
          st.push(i);
    }
    return c;
}

vector<int> pge(vector<int> &arr,int n)
{
    vector<int>d(n);
    stack<int> st;
    for(int i=0;i<n;i++)
    {
       while(!st.empty() && arr[st.top()]<arr[i])
       {
        st.pop();
       }
       if(st.empty())
       {
        d[i]=-1;
       }
       else
       {
        d[i]=st.top();
       }
       st.push(i);
    }
    return d;
}

int main()
{
    vector<int>arr={4,-2,-3,4,1};
    int n=5;
    vector<int> ns=nse(arr,n);
   vector<int> ps=pse(arr,n);
   vector<int> pg=pge(arr,n);
   vector<int> ng=nge(arr,n);
    int mod=(1e9+7);
    int left=0;
    int l=0;
    int r=0;
    int right=0;
    int sum=0;
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        left=i-ps[i];
        right=ns[i]-i;
        sum=(sum+(left*right*arr[i])%mod)%mod;
        l=i-pg[i];
        r=ng[i]-i;
        sum1=(sum1+(l*r*arr[i])%mod)%mod;
    }
   cout<<sum1-sum;
}