#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int l = 0;
    int seq = 0;
    int max_seq = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[l] == s[i]) {
            seq++;
        } else {
            seq = 1;
            l = i;
        }
        max_seq = max(max_seq, seq);
    }
    cout << max_seq;
    return 0;
}
