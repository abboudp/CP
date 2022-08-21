#include <iostream>
#define max(x, y) (((x) > (y))?(x):(y))
using namespace std;

int main() {
    int k, n, w, sum;
    cin >> k >> n >> w;
    sum = k * (w * (w + 1) / 2);
    cout << max(0, sum - n);
    return 0;
}

