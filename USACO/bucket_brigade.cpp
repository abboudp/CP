#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    int row_b, col_b, row_r, col_r, row_l, col_l;
    char x;
    int cows;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin >> x;
            if (x == 'B') {
                row_b = i;
                col_b = j;
            }
            if (x == 'R') {
                row_r = i;
                col_r = j;
            }
            if (x == 'L') {
                row_l = i;
                col_l = j;
            }
        }
    }
    cows = abs(row_l - row_b) + abs(col_l - col_b) - 1;
    if ((col_l == col_r && col_b == col_r) && ((row_l < row_r && row_r < row_b) || (row_b < row_r && row_r < row_l))){
        cows += 2;
    } else if ((row_l == row_r && row_b == row_r) && ((col_l < col_r && col_r < col_b) || (col_b < col_r && col_r < col_l))){
        cows += 2;
    }
    cout << cows;
    return 0;
}
