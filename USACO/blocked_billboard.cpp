#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    int flx, fly, frx, fry, slx, sly, srx ,sry, tlx, tly, trx, tryy, left, right, total;
    cin >> flx >> fly >> frx >> fry >> slx >> sly >> srx >> sry >> tlx >> tly >> trx >> tryy;
    left = max((min(frx, trx) - max(flx, tlx)), 0) * max((min(fry, tryy) - max(fly, tly)), 0);
    right = max((min(srx, trx) - max(slx, tlx)), 0) * max((min(sry, tryy) - max(sly, tly)), 0);
    total = (frx - flx) * (fry - fly) + (srx - slx) * (sry - sly);
    cout << total - (left + right);
    return 0;
}
