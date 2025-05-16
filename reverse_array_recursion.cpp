///reverse the array using the recursion
#include<bits/stdc++.h>
using namespace std;



void fun(vector<int> &arr,int n,int left,int right)
{
    if(left==right)

    {
        return;
    }
    
    
    if(left<right)
      {
        swap(arr[left],arr[right]);
        fun(arr,n,left+1,right-1);
      }
      


}


int main()
{
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
   
    fun(arr,n,0,n-1);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
    return 0;
}