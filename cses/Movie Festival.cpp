#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define SORT(a) sort(a.begin(), a.end())
 
int main() {
	int n;
	cin >> n;
 
	vector<pair<int, int>> a;
	while(n--) {
		int x,y;
		cin >> x >> y;
		a.pb({y,x});
	}
	SORT(a);
 
	int ans=0;
	int last = -1;
 
	for (const auto& it:a) {
		if (it.second >= last) {
			ans++;
			last = it.first;
		}
	}
	cout << ans; 
}
