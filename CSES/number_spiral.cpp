#include <iostream>
using namespace std;

int main() {
    long long t, row, col, x;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> row >> col;
        if (row > col) {
            if (row % 2 == 0) {
                x = (row - 1) * (row - 1) + 1;
                x = x + (row - 1 + row - 1 + 1) - col;
            } else {
                x = row * row;
                x = x - ((row - 1 + row - 1 + 1) - col);
            }
        } else {
            if (col % 2 == 0) {
                x = col * col;
                x = x - ((col - 1 + col - 1 + 1) - row);
            } else {
                x = (col - 1) * (col - 1) + 1;
                x = x + (col - 1 + col - 1 + 1) - row;
            }
        }
        cout << x << endl;
    }
    return 0;
}

