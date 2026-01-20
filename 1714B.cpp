#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    set<int> seen;
    int suffix_len = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (seen.count(a[i])) {
            break; 
        }
        seen.insert(a[i]);
        suffix_len++;
    }
    cout << n - suffix_len << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) solve();

    return 0;
}