#include <bits/stdc++.h>
using namespace std;

void tower() {
    int n;
    cin >> n;
    vector<long long> vec(n);

    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin() + 1, vec.end());

    long long t1_len = vec[0];

    for(int x=1; x<n; x++) {
        if(vec[x] > t1_len) {
            t1_len = t1_len + ((vec[x] - t1_len+1)/2);
        }
    }

    cout << t1_len << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) tower();

    return 0;
}