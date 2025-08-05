#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    const int N=1e9+7;
    long long ans=2;
    for(int i=1; i<n; i++) {
        ans*=2;
        ans=ans%N;
    }
    cout << ans;
}
