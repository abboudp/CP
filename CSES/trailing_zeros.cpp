#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long curr = 5;
    long long zeros = 0;
    while (curr <= n) {
        zeros += n / curr;
        curr *= 5;
    }
    cout << zeros;
    return 0;
}
