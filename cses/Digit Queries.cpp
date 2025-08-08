#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll pow_of_10(ll x) {
    ll a=1;
    for(int i=0; i<x; i++) {
        a*=10;
    }
    return a;
}

void solve() {
    ll n; cin >> n;
    ll count=1;
    ll d=0;
    while (true) {
        d++;
        n-=count*9*pow_of_10(count-1);
        if (n<=0) {
            n+=count*9*pow_of_10(count-1);
            break;
        }
        count++;
    }
    
    ll current_digit = (n-1)/d;
    ll index = (n-1)%d;
    ll req_num = pow_of_10(d-1) + current_digit;
    string s = to_string(req_num);
    cout << s[index] << endl;
    
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}
