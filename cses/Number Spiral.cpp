#include <bits/stdc++.h>
using namespace std;

void solve() {
    int y, x;
    cin >> y >> x;
    int m = max(y, x);
    long long ans;
    if (y == m) {
        if (y % 2 == 0) {
            ans = (m * m) - (x - 1);
        }
        else {
            ans = ((m - 1) * (m - 1)) + x;
        }
    }
    else {
        if (x % 2 == 0) {
            ans = ((m - 1) * (m - 1)) + y;
        }
        else {
            ans = (m * m) - (y - 1);
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
