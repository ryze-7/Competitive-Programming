#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define SORT(a) sort(a.begin(), a.end())
 
int main() {
	int n,x;
	cin >> n >> x;
	
	vector<pair<int, int>>a;
	for(int i=0; i<n; i++) {
		int k; cin >> k;
		a.pb({k,i+1});
	}
 
	SORT(a);
 
	int i=0,j=n-1;
	while (j-i > 1) {
		if (a[i].first + a[j].first < x) {
			i++;
		}
		else if (a[i].first + a[j].first > x){
			j--;	
		}
		else {
			break;
		}
	}
	if ((a[i].first+a[j].first)==x && n>1) {
		cout << a[j].second << " " << a[i].second << endl;
	}
	else {
		cout << "IMPOSSIBLE";
	}
}
