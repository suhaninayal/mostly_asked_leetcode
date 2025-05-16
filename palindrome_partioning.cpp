#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int start,int end)
{
    while(start<end)
    {
        if(s[start++]!=s[end--])

        {
            return false;
        }
    }
    return true;
}


void func(string &s,vector<vector<string>> &res,vector<string> &temp,int ind)
{
    if(ind==s.size())
    {
        res.push_back(temp);
        return;
    }

    for(int i=ind;i<s.size();i++)
    {
        if(isPalindrome(s,ind,i))
        {
            temp.push_back(s.substr(ind,i-ind+1));
            func(s,res,temp,i+1);
            temp.pop_back();
        }
    }
}

vector<vector<string>> fun(string s)
{
    vector<vector<string>> res;
    vector<string> temp;
    func(s,res,temp,0);
    return res;
}








int main(){
    string s="aabb";
    vector<vector<string>> str=fun(s);
    for(auto it:str)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}