#include<bits/stdc++.h>
using namespace std;


struct job
{
    int id;
    int deadline;
    int profit;
};

bool static comp(job a ,job b)
{
    return (a.profit>b.profit);
}

pair<int,int> fun(vector<job> &arr,int n)
{
    sort(arr.begin(),arr.end(),comp);
    int maxi=arr[0].deadline;
    for(int i=1;i<n;i++)
    {
        maxi=max(maxi,arr[i].deadline);
    }

    vector<int>hash(maxi+1,-1);
    
    int countjob=0;
    int total_pro=0;
    for(int i=0;i<n;i++)
    {
        for(int j=arr[i].deadline;j>0;j--)
        {
            if(hash[j]==-1)
            {
                hash[j]=i;
                countjob++;
                total_pro+=arr[i].profit;
                break;
            }
        }
    }
    return make_pair(countjob,total_pro);
}

int main()
{
    int n=4;
    vector<job> arr={{1,4,20},{2,1,10},{3,2,40},{4,2,30}};
    pair<int,int> ans=fun(arr,n);
    cout<<ans.first<<" "<<ans.second;
    
}