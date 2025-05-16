//print the sum of all the subset of the given array
#include<bits/stdc++.h>
using namespace std;

void print_sum(int arr[],int n,int sum,vector<int>& temp,int index)
{
   // int sum=0;

    if(index==n)
    {
        cout<<sum<<endl;
        return;

    }

    temp.push_back(arr[index]);
    print_sum(arr,n,sum+arr[index],temp,index+1);
    temp.pop_back();
    print_sum(arr,n,sum,temp,index+1);
}

int main()
{
    int arr[]={1,2,3};
    int n=3;
    int sum=0;
    vector<int> temp;
    print_sum(arr,n,sum,temp,0);




}