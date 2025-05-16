#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> &arr, int n)
{
    int k = 3; // Group size
    map<int, int> mpp;

    // Count the frequency of each element
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

  while(!mpp.empty())
    {
        int current = mpp.begin()->first; // Use the key from the iterator

        for (int i = 0; i < k; i++)
        {
            if (mpp.find(current + i) != mpp.end())
            {
                mpp[current + i]--;
                if (mpp[current + i] == 0)
                {
                    mpp.erase(current + i);
                }
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 3, 6, 2, 3, 4, 7, 8,9};
    int n = arr.size();
    bool ans = f(arr, n);
    cout << ans;
}
