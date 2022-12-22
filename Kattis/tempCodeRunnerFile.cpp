#include <iostream>

using namespace std;

int main() {
    int pos[3];
    pos[0] = 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] = 'A') {
            swap(pos[0], pos[1]);
        } else if (s[i] == 'B') {
            swap(pos[1], pos[2]);
        } else {
            swap(pos[0], pos[2]);
        }
    }
    for (int i = 0; i < 3; i++) {
        if (pos[i] == 1) {
            cout << i+1 << endl;
        }
    }
    return 0;
}