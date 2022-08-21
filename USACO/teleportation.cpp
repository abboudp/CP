#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int result = abs(x - y);
    result = min(result, abs(x - a) + abs(y - b));
    result = min(result, abs(y - a) + abs(x - b));
    cout << result;
    return 0;
}

