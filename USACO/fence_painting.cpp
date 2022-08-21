#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int farm_min, farm_max, cow_min, cow_max;
    cin >> farm_min >> farm_max >> cow_min >> cow_max;
    int total = (farm_max - farm_min) + (cow_max - cow_min);
    total -= max(min(farm_max, cow_max) - max(farm_min, cow_min),0);
    cout << total;
    return 0;
}
