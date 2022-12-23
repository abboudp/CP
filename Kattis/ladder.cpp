#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double h, v;
    cin >> h >> v;
    cout << ceil(h / sin(v*3.14159/180)) << endl;
}