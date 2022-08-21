#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if ((x & 1) || (y & 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

