#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    bool arr[n] = {false};
    long long cnt = 0;
    long long sum = n * (n + 1) / 2;
    if (sum % 2 == 0) {
        sum /= 2;
        for (int i = n - 1; i >= 0; --i) {
            if ( sum - (i + 1) >= 0) {
                sum -= (i + 1);
                arr[i] = true;
                cnt++;
            }
        }
        cout << "YES" << endl;
        cout << cnt << endl;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == true) {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
        cout << n - cnt << endl;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == false) {
                cout << i + 1 << " ";
            }
        }
    } else {
        cout << "NO";
    }
    return 0;
}


