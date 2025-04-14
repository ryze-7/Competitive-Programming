#include <bits/stdc++.h>
using namespace std;

const int N=2e6+10;

int h[N];

void solve() {
	
	int n, k;
	cin >> n >> k;

	bool ans = 0;	

	int a[n];
	for(int i=0; i<n; ++i) {
		cin >> a[i];
		h[a[i]]++;
		if (h[k-a[i]]!=0) {
			ans = 1;
		}
	}

	if (ans) {
		cout << "YES";
	}
	else cout << "NO";

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t=1;
	//int t; cin >> t;
	while(t--) {
		solve();
	}	
}



