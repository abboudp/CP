#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long perms = 1;
    for (int i = 1; i <= n; ++i) {
        perms *= 2;
        perms %= ((long long)pow(10, 9) + 7);
    }
    cout << perms;
    return 0;
}


