//https://codeforces.com/problemset/problem/1341/A

#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        int n,a,b,c,d;
        cin >> n >> a >> b >> c >> d;

        int Mingw = a - b;
        int Maxgw = a + b;

        int Minpw = c - d;
        int Maxpw = c + d;

        int Minans = n * Mingw;
        int Maxans = n * Maxgw;

        if(Maxans < Minpw || Minans > Maxpw)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}
