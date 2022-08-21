#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    int rank[3] = {0, 0, 0};
    int bb, ba, sb, sa, gb, ga, pb, pa;
    cin >> bb >> ba >> sb >> sa >> gb >> ga >> pb >> pa;
    if (pa > pb) {
        rank[2] = pa - pb;
    }
    if (rank[2] > 0 || ga >= gb) {
        rank[1] = rank[2] + ga - gb;
    }
    if (rank[1] > 0 || sa >= sb) {
        rank[0] = rank[1] + sa - sb;
    }
    for (int i = 0; i < 3; ++i) {
        cout << rank[i] << endl;
    }
    return 0;
}