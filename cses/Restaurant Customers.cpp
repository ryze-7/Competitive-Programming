#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define SORT(a) sort(a.begin(), a.end())
 
int main() {
	int n; 
	cin >> n;
	vector<pair<int, bool>>a;
	while(n--) {
		int x,y;
		cin >> x >> y;
		a.pb({x,0});
		a.pb({y,1});
	}
	SORT(a);
	int ans=INT_MIN, mx=0;
	for (auto it:a) {
		if (it.second == 0) {
			mx++;
			ans = max(ans,mx);
		}
		else {
			mx--;
		}
	}
	cout << ans;

