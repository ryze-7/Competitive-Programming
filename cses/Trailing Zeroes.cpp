#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int ans=0;
	int temp=5;
	while(temp<=n) {
	    ans+=(n/temp);
	    temp*=5;
	}

	cout << ans;
}
