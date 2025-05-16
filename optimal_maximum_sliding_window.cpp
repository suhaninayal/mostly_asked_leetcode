#include<bits/stdc++.h>
using namespace std;

vector<int> maximum(vector<int> &arr,int k)
{
    deque<int>dq;
    vector<int> ans;
    for(int i=0;i<arr.size();i++)
    {
        if(!dq.empty() && dq.front()<=i-k)
        {
            dq.pop_front();
        }

        while(!dq.empty() && arr[dq.back()]<=arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);

        if(i>=k-1)
        {
            ans.push_back(arr[dq.front()]);
        }
    }
    return ans;
    
}
int main()
{
    vector<int> arr={1,3,-1,-3,5,3,7,1,6};
    int k=3;
    vector<int> res=maximum(arr,k);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }
    return 0;

}