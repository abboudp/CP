#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    string word;
    int line = 0;
    for (int i = 0; i < n; ++i) {
        cin >> word;
        if (line + word.length() <= k) {
            line += word.length();
            if (i != 0) {
                cout << " ";
            }
            cout << word;
        } else {
            line = word.length();
            cout << "\n" << word;
        }
    }

    return 0;
}