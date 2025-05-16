#include <bits/stdc++.h>
using namespace std;

string fun(string s, string t) {
    string res = s; 
    int r = 0; 
    while (r <= res.length() - t.length()) {  
        int k = 0; 

        while (k < t.length() && res[r + k] == t[k]) {
            k++;
        }

        if (k == t.length()) { 
            res.erase(r, t.size()); 

            
            r = max(0, r - (int)t.size() + 1);
        } else {
            r++; 
        }
    }

    return res; 
}

int main() {
    string s = "daabcbaabcbcaabbcabc";
    string t = "abc";
    string ans =fun(s,t);
    cout<<ans;
}
