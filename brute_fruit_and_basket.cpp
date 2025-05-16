#include<bits/stdc++.h>
using namespace std;

int fruit_basket(vector<int> &arr,int n)
{
    
    int basket=2;
    int maxilen=0;
    for(int i=0;i<n;i++)
    {
        set<int> st;
        for(int j=i;j<n;j++)
        {
            
                st.insert(arr[j]);
            if(st.size()<=basket)
            {
                maxilen=max(maxilen,j-i+1);
            }
            else
            {
                break;
            }


        }
    }
    return maxilen;
}


int main()
{
    vector<int> arr={1,1,1,5,6,6,6,6,7,8,9};
    int n=arr.size();
    int len=fruit_basket(arr,n);
    cout<<len;
}