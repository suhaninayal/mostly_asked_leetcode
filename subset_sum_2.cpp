#include<bits/stdc++.h>
using namespace std;

void func(vector<int> &arr,vector<int> &temp,vector<vector<int>> &res,int n,int ind)
{

   res.push_back(temp);
   for(int i=ind;i<n;i++)
   {
    if(i!=ind && arr[i]==arr[i-1])
    {
        continue;
    }
   
        temp.push_back(arr[i]);
        func(arr,temp,res,n,i+1);
        temp.pop_back();
    
   }
    


}
vector<vector<int>> fun(vector<int> &arr,int n)
{
    vector<int> temp;
    vector<vector<int>> res;
    func(arr,temp,res,n,0);
    return res;
    

}


int main()
{
    vector<int> arr={1,2,2};
    int n=arr.size();
    vector<vector<int>> ans=fun(arr,n);
    for(auto it:ans)

    {
        for(auto i:it)
        {
            cout<<i;
        }
        cout<<" ";
    }
}