#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int x, y;
        bool is_stack = true;
        bool is_queue = true;
        bool is_pq = true;
        stack<int> st;
        queue<int> q;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            if (x == 1) {
                st.push(y);
                q.push(y);
                pq.push(y);
            } else {
                if (st.empty() || st.top() != y) {
                    is_stack = false;
                } else {
                    st.pop();
                }

                if (q.empty() || q.front() != y) {
                    is_queue = false;
                } else {
                    q.pop();
                }

                if (pq.empty() || pq.top() != y) {
                    is_pq = false;
                } else {
                    pq.pop();
                }
            }
        }
        if ((is_stack && is_queue) || (is_queue && is_pq) || (is_stack && is_pq)) {
            cout << "not sure" << endl;
        } else if (is_stack) {
            cout << "stack" << endl;
        } else if (is_queue) {
            cout << "queue" << endl;
        } else if (is_pq) {
            cout << "priority queue" << endl;
        } else {
            cout << "impossible" << endl;
        }
    }
}