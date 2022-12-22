#include <iostream>

using namespace std;

int main() {
    bool increase = false;
    bool decrease = false;
    int n;
    cin >> n;
    string names[n];
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    if (names[0] < names[1]) {
        increase = true;
    } else {
        decrease = true;
    }
    for (int i = 1; i < n; i++) {
        if (increase) {
            if (names[i - 1] > names[i]) {
                cout << "NEITHER" << endl;
                return 0;
            }
        } else if (decrease) {
            if (names[i - 1] < names[i]) {
                cout << "NEITHER" << endl;
                return 0;
            }
        }
    }

    if (increase) {
        cout << "INCREASING" << endl;
    } else {
        cout << "DECREASING" << endl;
    }
}