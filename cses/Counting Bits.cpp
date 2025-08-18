#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin >> n;
	long long k=0, ans=0;
	
	for(long long i=n; i>=1; i/=2) {
	    k++;
	}

	for(long long j=1; j<=n; j++) {
	    for (long long i=1; i<=k; i++) {
	        if (((j>>(k-i))&1)==1) {
	            ans++;
	        }
	    }
	}
	cout << ans;
}
