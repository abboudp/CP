#include <iostream>

using namespace std;

int main() {
    int coords[4];
    for (int i = 0; i < 4; i++) {
        cin >> coords[i];
    }

    int min = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (coords[j] < coords[i]) {
                swap(coords[i], coords[j]);
            }
        }
    }

    cout << coords[0] * coords[2] << endl;
}