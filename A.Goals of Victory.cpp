//https://codeforces.com/problemset/problem/1877/A

#include <bits/stdc++.h>
using namespace std;


int main() {


    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int k[n];
    for(int i=0;i<n-1;i++)
    cin>>k[i];

    int ans=0;
    for(int i=0;i<n-1;i++)
    ans+=k[i];

    cout<<-ans<<endl;
    }

    return 0;
}
