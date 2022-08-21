#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long cnt = 0;
    long long prev, next;
    cin >> prev;
    for (int i = 1; i < n; ++i) {
        cin >> next;
        if (prev - next > 0) {
            cnt += prev - next;
            next = prev;
        }
        prev = next;
    }
    cout << cnt;
    return 0;
}


