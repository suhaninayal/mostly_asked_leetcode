#include<bits/stdc++.h>
using namespace std;

int fun(string s,int n)
{
    int total=0;
   
    unordered_map<char,int>mpp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    for(int i=0;i<s.length();i++)
    {
        if(i!=n && (s[i]=='I' || s[i]=='X'||s[i]=='C')&&( s[i+1]=='V' || s[i+1]=='X' &&s[i+1]=='L'|| s[i+1]=='C'|| s[i+1]=='D'|| s[i+1]=='M'))
        {
           
                int temp=mpp[s[i+1]]-mpp[s[i]];
                total+=temp;
                i++;
    
            
        }
        else
            {
                total+=mpp[s[i]];
            }
       
    }
    
    return total;
}



int main()
{
    string s="LVII";
    int n=s.length();
    int res=fun(s,n);
    cout<<res;
}