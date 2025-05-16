//maximal rectangle
#include<bits/stdc++.h>
using namespace std;

int hist(vector<int> &arr)
{
    int maxi=0;
    int n=arr.size();
  stack<int> st;
  for(int i=0;i<arr.size();i++)
  {
    while(!st.empty() && (i==n || arr[st.top()]>=arr[i]))
    {
        int h=arr[st.top()];
        st.pop();
        int w;
        if(st.empty())
        {
            w=i;
        }
        else
        {
            w=i-st.top()-1;
        }
        maxi=max(maxi,(h*w));
    }
    st.push(i);
  }
  return maxi;
}

int main()
{
    int n,m;
    cin>>n >>m;
    vector<vector<char>>matrix(n,vector<char>(m));
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
       
    }

    vector<int>prefix(m,0);
    int maxarea=0;
    for(int j=0;j<m;j++)
    {
        int sum=0;
        for(int i=0;i<n;i++)

        {
            if (matrix[i][j] == '1') {
            prefix[j] += 1;  // Increase height if the current cell is '1'
           } 
           else 
           {
              prefix[j] = 0;   // Reset height to 0 if the current cell is '0'
         }

        }
        maxarea=max(maxarea,hist(prefix));
    }
    
    cout<<maxarea;
}