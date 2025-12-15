//https://codeforces.com/problemset/problem/2004/A
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        if(n == 2 && abs(a[0] - a[1]) > 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
