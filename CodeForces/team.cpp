#include <iostream>
using namespace std;

int main() {
    int n, x, y, z;
    int solve = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y >> z;
        if (x + y + z > 1) {
            solve++;
        }
    }
    cout << solve;
    return 0;
}
