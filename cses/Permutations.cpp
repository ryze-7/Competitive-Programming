#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define all(v) v.begin(),v.end()
 
void solve() {
	int n;
	cin >> n;
	string s,k;
	for(int i=1; i<n+1; ++i) {
		if(i%2==0) {
			s+=to_string(i)+" ";
		}
		else {
			k+=to_string(i)+" ";
		}
	}
	string ans=s+k;
	if(n>3) {
		cout << ans;
	}
	else if (n==1) {
		cout << n;
	}
	else {
		cout << "NO SOLUTION";
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

