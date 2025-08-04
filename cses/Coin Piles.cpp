#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
    cin >> a >> b;
    if (a==0 && b==0) {
        cout << "YES" << endl;
    }
    else {
        if (a==b) {
            if ((a+b)%3==0) {
                cout << "YES" << "\n";
            }
            else {
                cout << "NO" << "\n";
            }
        }
        else if (a>b && (b*2)>=a) {
            if ((a+b)%3==0) {
                cout << "YES" << "\n";
            }
            else {
                cout << "NO" << "\n";
            }
        }
        else if (a<b && (a*2)>=b) {
            if ((a+b)%3==0) {
                cout << "YES" << "\n";
            }
            else {
                cout << "NO" << "\n";
            }
        }
        else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        solve();
    }
}
