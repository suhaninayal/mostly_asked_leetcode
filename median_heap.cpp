#include <queue>
using namespace std;

class MedianFinder {
public:
    priority_queue<int> left_maxheap; // Max-Heap (stores smaller half)
    priority_queue<int, vector<int>, greater<int>> right_minheap; // Min-Heap (stores larger half)

    MedianFinder() {}

    void addNum(int num) {
        if (left_maxheap.empty() || num < left_maxheap.top()) {
            left_maxheap.push(num);
        } else {
            right_minheap.push(num);
        }

        // Balance the heaps so that the size difference is at most 1
        if (left_maxheap.size() > right_minheap.size() + 1) {
            right_minheap.push(left_maxheap.top());
            left_maxheap.pop();
        } else if (right_minheap.size() > left_maxheap.size()) {
            left_maxheap.push(right_minheap.top());
            right_minheap.pop();
        }
    }

    double findMedian() {
        if (left_maxheap.size() == right_minheap.size()) {
            return (left_maxheap.top() + right_minheap.top()) / 2.0; // Ensure floating-point division
        } else {
            return left_maxheap.top(); // Odd number of elements, return top of max heap
        }
    }
};
