#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int s, int d, int a) {
    if (n==0) return;
    hanoi(n-1, s, a, d);
    cout << s << " " << d << endl;
    hanoi(n-1, a, d, s);
}

int main() {
    int n; cin >> n;
    cout << pow(2,n)-1 << endl;
    hanoi(n,1,3,2);
}
