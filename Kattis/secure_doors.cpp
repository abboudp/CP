#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    string action, name;
    set<string> s;
    for (int i = 0; i < n; i++) {
        cin >> action >> name;
        if (action == "entry") {
            if (s.find(name) != s.end()) {
                cout << name + " entered (ANOMALY)" << endl;
            } else {
                s.insert(name);
                cout << name + " entered" << endl;
            }
        } else {
            if (s.find(name) == s.end()) {
                cout << name + " exited (ANOMALY)" << endl;
            } else {
                s.erase(name);
                cout << name + " exited" << endl;
            }
        }
    }
}