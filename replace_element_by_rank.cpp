#include <bits/stdc++.h>
using namespace std;

vector<int> f(vector<int> &arr, int n) {
    // Step 1: Use a max heap to sort elements (not strictly necessary, but following your structure)
    //priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;

    vector<int> ans;
    for (int i = 0; i < n; i++) {
        minheap.push(arr[i]);
    }

    // Step 2: Extract elements in sorted order (descending)
    while (!minheap.empty()) {
        ans.push_back(minheap.top());
        minheap.pop();
    }

    // Step 3: Map elements to their ranks (ascending order)
    unordered_map<int, int> mpp;
    int rank = 1;

    

    for (int i = 0; i < n; i++) {
        if (mpp.find(ans[i]) == mpp.end()) {
            mpp[ans[i]] = rank++;
        }
    }

    // Step 4: Replace original array elements with their ranks
    vector<int> res;
    for (int i = 0; i < n; i++) {
        res.push_back(mpp[arr[i]]);
    }

    return res;
}

int main() {
    vector<int> arr = {20, 15, 26, 2, 98, 6};
    int n = arr.size();
    vector<int> ans = f(arr, n);

    // Print the result
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
