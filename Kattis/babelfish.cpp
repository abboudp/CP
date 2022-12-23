#include <iostream>
#include <map>

using namespace std;

int main() {
    string word, translation;
    string line;
    map<string, string> m;
    while (getline(cin, line) && !line.empty()) {
        int split = line.find(' ');
        translation = line.substr(0, split);
        word = line.substr(split + 1);
        m[word] = translation;
    }

    while (cin >> word) {
        if (m.find(word) == m.end()) {
            cout << "eh" << endl;
        } else {
            cout << m[word] << endl;
        }
    }
}