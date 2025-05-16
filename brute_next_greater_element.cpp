//next greater element
#include<bits/stdc++.h>
using namespace std;

vector<int> fun(int arr[],int n)
{
    vector<int> ans;
    for(int i=0;i<n;i++)
    { bool f=false;

        for(int j=i+1;j<n;j++)
        {
            
            if(arr[i]<arr[j])
            {
                ans.push_back(arr[j]);
                f=true;
                break;
            }
        }
            if(!f)
            {
                ans.push_back(-1);
            }
            
           
        
        

    }
    return ans;
}
int main()
{
    int arr[]={6,0,8,1,3};
    int n=5;
    vector<int> res=fun(arr,n);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }

}