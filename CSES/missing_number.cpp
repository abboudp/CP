#include <iostream>
using namespace std;

int main() {
    int n, x, sum;
    cin >> n;
    sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        cin >> x;
        sum = sum ^ x;
    }
    for (int i = 1; i < n + 1; ++i) {
        sum = sum ^ i;
    }
    cout << sum;
    return 0;
}

