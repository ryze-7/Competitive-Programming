#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n; cin >> n;
	vector<int> a;
	for(int i=0; i<n; ++i) {
		int temp; cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end());
	int count=1;
	for(int i=1; i<n; ++i) {
		if (a[i]>a[i-1]) {
			count++;
		}
	}
 
	cout << count;
}
