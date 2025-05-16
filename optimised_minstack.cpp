#include <bits/stdc++.h>
using namespace std;


class MinStack {
  stack < long long > st;
  long long mini;
  public:
    /** initialize your data structure here. */
    MinStack() {
      while (st.empty() == false) st.pop();
      mini = INT_MAX;
    }

    
    void Push(int value) {
    long long val = value;
    if (st.empty()) {
      mini = val;
      st.push(val);
    } else {
      if (val < mini) {
        st.push(2 *val*1LL - mini);
        mini = val;
      } else {
        st.push(val);
      }
    }
  }

    void pop() {
    if (st.empty()) return;
    long long el = st.top();
    st.pop();

    if (el < mini) {
      mini = 2 * mini - el;
    }
  }

   int top() {
    if (st.empty()) return -1;

    long long el = st.top();
    if (el < mini) return mini;
    return el;
  }

    int getmin()
    {
       
        return mini;
    }
};

int main()
{
    MinStack m;
    m.Push(2);
    m.Push(1);
    m.Push(8);
    cout << "The top is " << m.top() << endl;
    cout << "The min is " << m.getmin() << endl;

    return 0;
}
