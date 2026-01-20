#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);

    sort(vec.begin(), vec.end());
    int diff = vec[0]-vec[2];
    if(diff <= -10 || diff >= 10) {
        cout << "check again";
    } else {
        cout << "final " << vec[1];
    }

    return 0;
}

