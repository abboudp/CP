#include <iostream>
#include <vector>

using namespace std;

struct Time {
    string hours;
    int minutes;
    string zone;
    string timeString;

    Time(string s) {
        int timeSplit = s.find(':');
        int zoneSplit = s.find(' ');
        hours = s.substr(0, timeSplit);
        string minutesString = s.substr(timeSplit + 1, zoneSplit);
        if (minutesString[0] == '0') {
            minutes = int(minutesString[1]);
        } else {
            minutes = stoi(minutesString);
        }
        zone = s.substr(zoneSplit + 1);
        timeString = s;
    }
};

bool leastTime(Time a, Time b) {
    if (a.zone == "a.m." && b.zone == "p.m.") {
        return true;
    }
    if (a.zone == "p.m." && b.zone == "a.m.") {
        return false;
    }
    if (a.hours != b.hours) {
        if (stoi(a.hours) != 12 && (stoi(b.hours) == 12 || stoi(b.hours) < stoi(a.hours))) {
            return false;
        } else {
            return true;
        }
    }

    if (a.minutes < b.minutes) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    string s;
    vector<Time> vec;
    while (cin >> n && n != 0) {
        for (int i = 0; i < n; i++) {
            getline(cin.ignore(), s);
            Time t(s);
            vec.push_back(t);
        }

        sort(vec.begin(), vec.end(), leastTime);

        for (int i = 0; i < n; i++) {
            cout << vec[i].timeString << endl;
        }

        cout << endl;
    }
}