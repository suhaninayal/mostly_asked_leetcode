//two sum2 problem input array is sorted----->since input array is sorted due to which we can use 
//two pointer approach to solve the question.
//time complexity=0(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> arr={2,7,10,12};
     vector<int>res;
     int n=4;
     int k=9;
     int left=0;
     int right=arr.size()-1;
     while(left<=right)
     {
         if(arr[right]+arr[left]==k)
        {
            res.push_back(left);
            res.push_back(right);
        }
        if(arr[right]+arr[left]>k)
        {
            right--;
        }
       else
        {
            left++;
        }
       
        
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }
}