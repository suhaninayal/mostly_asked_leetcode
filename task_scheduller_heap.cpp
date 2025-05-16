//task scheduller
//we have given a cpu array which contain only alphabets and 
// we have given n ,we have to find the the time by the cpu to complete all the tasks but
//there is a constraints that there should be a gap of n intervals between two same process
//this qtn can be solve using greedy method and with the heap here we are doing with the heap 
//one.
#include<bits/stdc++.h>
using namespace std;


int fun(vector<char>&arr)
{
    int n=2;
    vector<int> mpp(26);
    for(int i=0;i<arr.size();i++)
    {
        mpp[arr[i]-'A']++;
    }
    priority_queue<int> maxheap;
    for(auto it:mpp)
    {
        if(it>0)
        {
            maxheap.push(it);
        }
    }

    int time=0;
    while(!maxheap.empty())
    {
        vector<int> temp;
        for(int i=1;i<=n+1;i++)
        {
            if(!maxheap.empty())
            {
                int fre=maxheap.top();
                maxheap.pop();
                fre--;
                temp.push_back(fre);

            }
        }

        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]>0)
            {
                maxheap.push(temp[i]);
            }
        }
        if(maxheap.empty())
        {
            time+=temp.size();
        }
        else
        {
            time+=n+1;
        }

    }
    return time;
}




int main()
{
    vector<char> arr={'A','A','A','B','B','B'};
    
    int ans=fun(arr);
    cout<<ans;
}
