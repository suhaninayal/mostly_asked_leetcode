#include <bits/stdc++.h>
using namespace std;

string fun(string s, string t) {
    int l = 0;
    string res = s;
    int r = 0;
    int k = 0;

    while (r < res.length()) {
        while (r < res.length() && k < t.length() && res[r] == t[k]) {
            k++;
            r++;
        }

        if (k == t.length()) {
            r--;
            int end = r + 1;
            k--;
            while (k >= 0) {
                if (t[k] == res[r]) {
                    k--;
                }
                r--;
            }
            k++;

            // Remove `t` from `res`
            res.erase(r + 1, t.size());

            // Move `r` back to check for consecutive occurrences
            r = max(0, r - (int)t.size() + 1);
        }
        r++;
    }

    return res;  // Ensure function returns the modified string
}

int main() {
    string s = "daabcbaabcbcaabbcabc";
    string t = "abc";
    string ans = fun(s, t);
    cout << ans;  // Expected Output: "dabaabbc"
}
