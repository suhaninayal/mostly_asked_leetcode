//brute force of trapped rainwater
//the time complexity will be 0(3N) 
//space complexity will be 0(1N)
#include<bits/stdc++.h>
using namespace std;


int trapped(vector<int> &arr,int n)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        int j=i;
        int leftmax=0,rightmax=0;
        while(j>=0)
        {
            leftmax=max(leftmax,arr[j]);
            j--;
        }
        j=i;
        while(j<n)
        {
            rightmax=max(rightmax,arr[j]);
            j++;
        }
        if(arr[i]<leftmax && arr[i]<rightmax)
        {
            total+=min(leftmax,rightmax)-arr[i];
        }
    }
    return total;
}
int main()
{
    vector<int>arr;
    arr={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=12;
    int ans=trapped(arr,n);
    cout<<ans;
}