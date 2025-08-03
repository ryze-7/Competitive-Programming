#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define all(v) v.begin(),v.end()
 
void solve() {
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i=0; i<n-1; i++) {
		cin >> v[i];
	}
	sort(all(v));
	for(int i=1; i<=n; i++) {
		if(v[i]!=i) {
			cout << i;
			break;
		}
	}
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int t;
	t=1;
	while(t--) {
		solve();
	}
}
