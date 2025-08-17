#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define SORT(a) sort(a.begin(), a.end())
 
int main() {
	int n,m;
	cin >> n >> m;
	multiset<int> a;
	for(int i=0; i<n; i++) {
		int x; cin >> x;
		a.insert(x);
	}
	for(int i=0; i<m; i++) {
		int mx; cin >> mx;
		auto it = a.upper_bound(mx);
		if (it == a.begin()) {
			cout << -1 << endl;
		}
		else {
			--it;
			cout << *it << endl;
			a.erase(it);
		}
	}

