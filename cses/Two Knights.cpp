#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(long long i=1; i<=n; i++) {
        long long ans = (i*i*(i*i-1)/2)-(4*(i-1)*(i-2));
        cout << ans << endl;
    }
}