#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    int cost = 0;
    for (int i = 2; i < n; i+=3) {
        cost += arr[i];
    }
    if (arr.size() % 3 != 0) {
        int offset = arr.size() % 3;
        auto iter = arr.begin() + n - offset;
        while (iter != arr.end()) {
            cost += *iter;
            iter++;
        }
    }
    cout << cost << endl;
}