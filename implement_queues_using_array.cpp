#include<bits/stdc++.h>
using namespace std;

class queues
{
    int *arr;
    int start, end, currsize, maxsize;
public:
    // Default constructor with a default max size of 10
    queues()
    {
        maxsize = 10;
        arr = new int[maxsize];
        start = -1;
        end = -1;
        currsize = 0;
    }

    // Parameterized constructor
    queues(int maxsize)
    {
        this->maxsize = maxsize;
        arr = new int[maxsize];
        start = -1;
        end = -1;
        currsize = 0;
    }

    // Push element to queue
    void push(int newele)
    {
        if (currsize == maxsize)
        {
            cout << "Queue is full " << endl;
            return;
        }
        if (end == -1)
        {
            start = 0;
            end = 0;
        }
        else
        {
            end = (end + 1) % maxsize;
        }
        arr[end] = newele;
        cout << "The element pushed is " << newele << endl;
        currsize++;
    }

    // Pop element from queue
    int pop()
    {
        if (start == -1)
        {
            cout << "Queue is empty" << endl;
            return -1; // Error value since the queue is empty
        }
        int popped = arr[start];
        if (currsize == 1)
        {
            start = -1;
            end = -1;
        }
        else
        {
            start = (start + 1) % maxsize;
        }
        currsize--;
        return popped;
    }

    // Get the front element
    int top()
    {
        if (start == -1)
        {
            cout << "Queue is empty" << endl;
            return -1; // Error value since the queue is empty
        }
        return arr[start];
    }

    // Get the current size of the queue
    int size()
    {
        return currsize;
    }
};

int main()
{
    queues q;
    q.push(6);
    q.push(9);
    q.push(3);
    q.push(2);
    cout << "Top element: " << q.top() << endl;
    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    cout << "Top element after pop: " << q.top() << endl;
    cout << "Size of queue after pop: " << q.size() << endl;
    return 0;
}
