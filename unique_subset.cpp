#include <bits/stdc++.h>
using namespace std;

void print_uq_subset(int arr[], int n, vector<vector<int>>& ans, vector<int>& temp, int index) {
    ans.push_back(temp);
    for (int i = index; i < n; i++) {
        // Skip duplicates
        if (i != index && arr[i] == arr[i - 1]) {
            continue;
        }
        temp.push_back(arr[i]);
        print_uq_subset(arr, n, ans, temp, i + 1);
        temp.pop_back(); // backtrack to explore other subsets
    }
}

int main() {
    int arr[] = {1, 2, 2};
    int n = 3;
    sort(arr, arr + n); // Sort array to handle duplicates
    vector<int> temp;
    vector<vector<int>> ans;

    print_uq_subset(arr, n, ans, temp, 0);

    cout << "The subsets are -" << endl;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl; // New line after each subset
    }

    return 0;
}
