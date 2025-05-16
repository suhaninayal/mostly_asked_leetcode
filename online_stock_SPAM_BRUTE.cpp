#include <bits/stdc++.h>
using namespace std;

class StockSpanner {
private:
    vector<int>arr;

public:
    StockSpanner() {}

    int next(int value) {
        arr.push_back(value); // Add the new value to the array
        int count = 1;

        for (int i = arr.size() - 2; i >= 0; i--) {
            if (arr[i] <= value) {
                count++;
            } else {
                break;
            }
        }

        return count;
    }
};

int main() {
    StockSpanner s;
    cout << s.next(2) << endl; // Should print 1
    cout << s.next(5) << endl; // Should print 2
    cout << s.next(1) << endl; // Should print 1
    cout << s.next(3) << endl; // Should print 2
    cout << s.next(5) << endl; // Should print 4

    return 0;
}
