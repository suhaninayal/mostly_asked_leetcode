//lemonade change ------------------>greedy algorithm
#include<bits/stdc++.h>
using namespace std;

bool lemonade_change(vector<int> &bills,int n)
{
    int five=0;
    int ten=0;
    for(int i=0;i<n;i++)
    {
        if(bills[i]==5)
        {
            five++;
        }
        else if(bills[i]==10)
        {
            if(five)
            {
                five--;
                ten++;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(ten && five)
            {
                ten--;
                five--;
            }
            else if(five>=3)
            {
                five-=3;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}








int main()
{
    vector<int> bills={5,5,20,10,20};
    int n=bills.size();
    bool ans=lemonade_change(bills,n);
    cout<<ans;
}