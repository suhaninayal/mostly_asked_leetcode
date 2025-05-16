//assign cookies
#include<bits/stdc++.h>
using namespace std;


int assign_cookies(vector<int> &greed ,vector<int> &siz)
{
    int n=greed.size();
    int m=siz.size();
    int l=0;
    int r=0;
    while(l<n && r<m)
    {
        if(greed[l]>= siz[r])
        {
            r++;
        }
        l++;
    }
    return r;

}














int main()
{
    vector<int> greed={1,1,3,4,5};
    vector<int> siz={1,3,4,7,1};
    int ans=assign_cookies(greed,siz);
    cout<<ans;
}