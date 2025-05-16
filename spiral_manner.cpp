//print the matrix in the spiral manner
#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=arr.size();

    int left=0;
    int right=n-1;
    int top=0;
    int bottom=n-1;

   while(top<=bottom && left<=right)
   {
    //right
    for(int i=left;i<=right;i++)
    {
        cout<<arr[top][i];
    }
     top++;

    //bottom
    for(int i=top;i<=bottom;i++)
    {
        cout<<arr[i][right];
    }
    right--;

    //left
  if(top<=bottom)
  {
    for(int i=right;i>=left;i--)
    {
        cout<<arr[bottom][i];
    }
  }
    //top
    bottom--;
  if(left<=right)
  {
    for(int i=bottom;i>=top;i--)
    {

        cout<<arr[i][left];
    }
    left++;
  }
   }
}