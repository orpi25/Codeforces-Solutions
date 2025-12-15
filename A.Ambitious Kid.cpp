#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minimumAbsoluteValue = INT_MAX;

    for (int i = 0; i < n; i++) {
    int number;
    cin >> number;

    int absoluteValue = abs(number);
    if (absoluteValue < minimumAbsoluteValue) {
            minimumAbsoluteValue = absoluteValue;
    }
    }
    cout << minimumAbsoluteValue << endl;
    return 0;
}
