#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define to_char(x) static_cast<char> (x) 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    string a[(1 << n)];
    for (int i = 0; i < (1 << n); ++i) {
        string binary = bitset<16>(i).to_string();
        a[i] = binary.substr(16 - n);
    }
    for(int i=0; i<(1 << n) ; i++) {
        if (i%2==0) {
            cout << a[i] << endl;
        }
    }
    for(int i=0; i<(1 << n); i++) {
        if (i%2!=0) {
            cout << a[i] << endl;
        }
    }
}
