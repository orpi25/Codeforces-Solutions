// https://codeforces.com/problemset/problem/1814/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, b;
        cin >> n >> b;

        if (n % 2 == 0) {
            cout << "YES" << endl;
        } else {
        if (b % 2 != 0)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    }

    return 0;
}
