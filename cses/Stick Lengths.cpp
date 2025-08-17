#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define SORT(a) sort(a.begin(), a.end())
 
int main() {
	int n;
	cin >> n;
	
	vector<int>a(n);
 
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	SORT(a);
	int median = a[n/2];
	ll ans = 0;
	for (int i=0; i<n; i++) {
		ans += abs((ll)a[i]-median);
	}
	if (n==1) {
		cout << 0;
	}
	else cout << ans;
}

