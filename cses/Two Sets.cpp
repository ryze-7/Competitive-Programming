#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum=1LL*n*(n+1)/2;
    if (sum%2!=0) {
        cout << "NO";
    }
    else {
        cout << "YES" << "\n";
        bool a[n+1];
        memset(a,0,sizeof(a));
        long long temp=0;
        int sz=0;
        for(int i=n; i>0; i--) {
            if ((temp+i)<=sum/2) {
                a[i] = 1;
                temp+=i;
                sz++;
            }
        }
        cout << n-sz << "\n";
        for(int i=1; i<n+1; i++) {
            if (a[i]!=1) {
                cout << i << " ";
            }
        }
        cout << "\n" << sz << "\n";
        for(int i=1; i<n+1; ++i) {
            if (a[i]==1) {
                cout << i << " ";
            }
        }
    }   
}
