#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    
    for(int i=0; i<pow(2,n); ++i) {
        int gray_code = (i ^ (i>>1));
        for(int j=n-1; j>=0; --j) {
            cout << ((gray_code>>j) & 1);
        }
        cout << endl;
    }
}
