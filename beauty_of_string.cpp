#include <bits/stdc++.h>
using namespace std;

int fun(string s, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        unordered_map<char, int> mpp;
        
        int maxfre = INT_MIN;
        int minfre = INT_MAX;

        for (int j = i; j < n; j++) {
            mpp[s[j]]++;

            maxfre = max(maxfre, mpp[s[j]]);

            // Find the correct min frequency by iterating through the map
            minfre = INT_MAX;
            for (auto it : mpp) {
                minfre = min(minfre, it.second);
            }

            sum += (maxfre - minfre);
        }
    }
    
    return sum;
}

int main() {
    string s = "aacb";
    int n = s.length();
    int sum = fun(s, n);
    cout << sum;
}
