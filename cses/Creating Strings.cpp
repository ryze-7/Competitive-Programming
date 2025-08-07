#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main() {
	string s; cin >> s;
	sort(s.begin(),s.end());
	vector<string>a;
	a.pb(s);
	while(next_permutation(s.begin(),s.end())) {
	    a.pb(s);
	}
	cout << a.size() << "\n";
	for(auto it:a) {
	    cout << it << "\n";
	}
}
