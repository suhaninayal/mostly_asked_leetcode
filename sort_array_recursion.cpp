//sort an array using recursion
#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr,int temp)
{
    if(arr.size()==0 || arr[arr.size()-1]<=temp)
    {
        arr.push_back(temp);
        return;
    }
    int val=arr[arr.size()-1];
    arr.pop_back();
    insert(arr,temp);
    arr.push_back(val);
    return;
}
void fun(vector<int> &arr)
{
    //base condition
    if(arr.size()==1)
    
    {
        return ;
    }
    int temp=arr.back();
    arr.pop_back();
    fun(arr);
    insert(arr,temp);
    return;
}



int main()
{
   vector<int> arr={5,4,3,2,1};
   int n=arr.size();
   fun(arr);
   for(int i=0;i<arr.size();i++)
   {
    cout<<arr[i];
   }
   return 0;
}
