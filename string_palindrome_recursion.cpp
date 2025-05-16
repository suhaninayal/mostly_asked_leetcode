//string is palindrome or not
#include<bits/stdc++.h>
using namespace std;

void fun(string &s,int left,int right)
{
    if(left>right)
    {
        cout<<"true";
        return;
    }
    
    if(left<right)
    {
        if(s[left]!=s[right])
        {
            cout<<"false";
            return;
        }
    }
    fun(s,left+1,right-1);
}







int main()
{
    string s="aabaa";
    fun(s,0,s.length()-1);
    return 0;
}