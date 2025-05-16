//letter combination in a phone number;
#include<bits/stdc++.h>
using namespace std;


void fun(string &arr,unordered_map<char,string> &mpp,vector<string> &res,string &temp,int ind)
{
    if(ind>=arr.length())
    {
        res.push_back(temp);
        return;
    }

    char ch=arr[ind];
    string s=mpp[ch];
    for(int i=0;i<s.length();i++)

    {
        temp.push_back(s[i]);
        fun(arr,mpp,res,temp,ind+1);
        temp.pop_back();
    }
}
vector<string> letter_combination(string arr)
{
    unordered_map<char,string> mpp;
    mpp['2']="abc";
    mpp['3']="def";
    mpp['4']="ghi";
    mpp['5']="jkl";
    mpp['6']="mno";
    mpp['7']="pqrs";
    mpp['8']="tuv";
    mpp['9']="wxyz";
    vector<string> res;
    string temp="";
    fun(arr,mpp,res,temp,0);
    return res;

}




int main()
{
    string arr="23";
    vector<string>ans=letter_combination(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

  
}