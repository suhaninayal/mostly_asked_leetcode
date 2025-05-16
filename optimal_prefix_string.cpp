#include<bits/stdc++.h>
using namespace std;


string fun(string s,int n)

{
    string ans;
    vector<string>words;
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        words.push_back(word);
    }
  
   

    int l=words.size();
    string first=words[0];
   
   int j;
    for(int i=1;i<l;i++)
    {
         j=0;
        while(first[j]==words[i][j])
        {
            j++;
        }
       if(first[j]!=words[i][j])
       {
        break;
       }

      
    }
    ans=s.substr(0,j);
    
    return ans;

}



int main()
{
    string s="fliwer flight fliwn";
    int n=s.length();
    string res=fun(s,n);
    cout<<res;
}

