#include <bits/stdc++.h>
using namespace std;

class Stock
{
    int index;
    stack<pair<int, int>> st;

public:
    // Constructor to initialize the class
    Stock()
    {
        index = -1;
        st = stack<pair<int, int>>(); // Correct stack initialization
    }

    // Function to calculate stock span
    int next(int value)
    {
        index = index + 1;
        int ans; // Define the variable
        while (!st.empty() && st.top().first <= value)
        {
            st.pop();
        }
        if (st.empty())
    {
        ans = index - (-1); // -1 represents no element in the stack
    }
    else
    {
        ans = index - st.top().second;
    }

        st.push({value, index});

        return ans;
    }
};

int main()
{
    Stock s; // Create an object of the class
    cout << s.next(8) << endl;
    cout << s.next(5) << endl;
    cout << s.next(6) << endl;
    cout << s.next(2) << endl;
    cout << s.next(7) << endl;

    return 0;
}
