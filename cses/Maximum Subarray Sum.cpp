#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define SORT(a) sort(a.begin(), a.end())
 
int main() {
	int n;
	cin >> n;
	
	ll mx = 0, ans = INT_MIN;
	for(int i=0; i<n; i++) {
		int x; cin >> x;
		mx = max((ll)x, mx+x);
		ans = max(ans,mx);
	}
	cout << ans;
}

