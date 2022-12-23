#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string seq1;
        string seq2;
        string diff;
        cin >> seq1;
        cin >> seq2;

        for (auto i = seq1.begin(), j = seq2.begin(); i != seq1.end(), j != seq2.end(); i++, j++) {
            if (*i != *j) {
                diff += '*';
            } else {
                diff += '.';
            }
        }

        cout << seq1 << endl;
        cout << seq2 << endl;
        cout << diff << endl;
        cout << endl;
    }
}