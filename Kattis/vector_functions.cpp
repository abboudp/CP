#include <vector>

using namespace std;

void backwards(vector<int>& vec){
    for (int i = 0; i < vec.size() / 2; i++) {
        swap(vec[i], vec[vec.size() - i]);
    }
}

vector<int> everyOther(const vector<int>& vec){
    vector<int> other;
    for (int i = 0; i < vec.size(); i += 2) {
        other.push_back(vec[i]);
    }
    return other;
}

int smallest(const vector<int>& vec){
    int minVal = INT_MIN;
    for (int i = 0; i < vec.size(); i++) {
        minVal = min(minVal, vec[i]);
    }
    return minVal;
}

int sum(const vector<int>& vec){
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    return sum;
}

int veryOdd(const vector<int>& suchVector){
    int count = 0;
    for (int i = 1; i < suchVector.size(); i+=2) {
        if (suchVector[i] % 2 == 1) {
            count++;
        }
    }
    return count;
}