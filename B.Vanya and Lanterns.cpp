#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> arr(n);

    for (int &x : arr) {
        cin >> x;
    }

    sort(arr.begin(), arr.end());

    double max_gap = max(arr[0], l - arr[n - 1]) * 2.0;

    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, (double)(arr[i] - arr[i - 1]));
    }

    cout << fixed << setprecision(9) << max_gap / 2.0 << endl;

    return 0;
}
