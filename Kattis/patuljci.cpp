#include <iostream>

using namespace std;

int main() {
    int perms[36];
    int dwarves[9];
    int total = 0;
    for (int i = 0; i < 9; i++) {
        cin >> dwarves[i];
        total += dwarves[i];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            int tmp = total;
            tmp -= dwarves[i] + dwarves[j];
            if (tmp == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k == i || k == j) {
                        continue;
                    }
                    cout << dwarves[k] << endl;
                }
            }
        }
    }
}