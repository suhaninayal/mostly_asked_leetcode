//palindrome partition
#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(int start,string s,int end)
{
    while(start<=end)
    {
        if(s[start]!=s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void solve(string s,int index,vector<vector<string>>&res,vector<string> &path)
{
    if(index==s.size())
    {
        res.push_back(path);
        return;
    }

    for(int i=index;i<s.size();i++)
    {
        if(ispalindrome(index,s,i))
        {
            path.push_back(s.substr(index,i-index+1));
            solve(s,i+1,res,path);
            path.pop_back();
        }
    }
}

vector<vector<string>>palindome_string(string s)
{
    vector<vector<string>>res;
    vector<string>path;
    solve(s,0,res,path);
    return res;
}


int main()
{
    string s="aabb";
    vector<vector<string>>res=palindome_string(s);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


}