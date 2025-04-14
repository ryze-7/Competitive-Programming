#include <bits/stdc++.h>
using namespace std;


void solve() {
	const int N=26;
	int hash[N]={0};
	
	string str; cin >> str;

	for(int i=0; i<str.length(); i++) {
		hash[str[i]-97]++;
	}

	bool isDoubleString = false;

	for(int i=0; i<N; i++) {
		if(hash[i] > 1) {
			isDoubleString = true;
		}
	}

	if(isDoubleString) {
		cout << "Yes" << "\n";
	}
	else {
		cout << "No"  << "\n";
	}
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}	
}
