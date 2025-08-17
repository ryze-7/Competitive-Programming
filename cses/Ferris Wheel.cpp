#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define SORT(a) sort(a.begin(),a.end())

int main() {
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    SORT(a);
    
    ll p=0,q=n-1,ans=0;
    while(q-p >= 0) {
        if (a[p]+a[q] <= x) {
            ans++;
            p++;
            q--;
        }
        else {
            ans++;
            q--;
        }
    }
    cout << ans;
}
