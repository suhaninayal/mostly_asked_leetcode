//number of next greater element to the right
//0 1 2 3 4 5 6 7 8
//3 4 2 7 5 8 10 6
//queries=2
//indices=[0,5]
//output=[6,1]

#include<bits/stdc++.h>
using namespace std;

vector<int> f(vector<int> &arr,int n,vector<int> indices,int queries)
{
    vector<int> ans;
    stack<int> st;
    int count=0;
    int j=0;
    for(int i=0;i<queries;i++)
    {
        while(j!=indices[i])
        {
            j++;
        }
        if(j==indices[i])
        {
            count=0;
            for(int k=j;k<n;k++)
            {
               if(arr[k]>arr[j])
               {
                count++;
               }
            }
            ans.push_back(count);
           
        }
    }
    return ans;
}
        

        
             






int main()
{
    vector<int> arr={3,4,2,7,5,8,10,6};
    vector<int> indices={0,5};
    int queries=2;
    int n=arr.size();
    vector<int> ans=f(arr,n,indices,queries);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
