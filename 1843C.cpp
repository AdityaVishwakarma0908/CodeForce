#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long t;
    cin >> t;
    int sum = 0;
    while(t>=1) {
        sum += t;
        t /= 2;
    }

    cout << sum << endl;
}

int main() {
    int n;
    long long t;
    cin >> n;

    for(int i=0; i<n; i++) {
        solve();
    }

    return 0;
}