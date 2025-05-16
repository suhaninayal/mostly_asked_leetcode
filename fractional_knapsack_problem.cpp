//fractional knapsack problem
#include<bits/stdc++.h>
using namespace std;


struct item
{
    int value;
    int weight;

};

class solution
{
    public:
    bool static comp(item a,item b)
    {
        double r1=(double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;

        return r1>r2;
    }

    double fun(item arr[],int n,int W)
    {
        sort(arr,arr+n,comp);
        double total=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight<=W)
            {
            total+=arr[i].value;
            W=W-arr[i].weight;
            }
            else
            {
                total+=(double)((arr[i].value)/(arr[i].weight))*W;
                break;
            }
        }
      return total;
    }
};









int main()
{

   int n=4;
   item arr[n]={ {100,20},{60,10},{120,30},{40,30} };
   int W=50;
   solution obj;
   double ans=obj.fun(arr,n,W);
   cout<<ans;
   return 0;


}