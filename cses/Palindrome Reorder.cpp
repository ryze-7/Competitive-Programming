#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	string str; cin >> str;
	int a[26];
	memset(a,0,sizeof(a));
	for(int i=0; i<str.length(); i++) {
	    a[str[i]-65]++;
	}
	int odd = INT_MAX;
	int number_of_odds=0;
	for(int i=0; i<26; i++) {
	    if (a[i]%2!=0) {
	        odd=i; 
	        number_of_odds++;
	    }
	}
	if (number_of_odds>1) {
	    cout << "NO SOLUTION";
	}
	else {
    	for(int i=0; i<26; ++i) {
    	    if (a[i]%2==0) {
    	        for(int j=0; j<a[i]/2; j++) {
    	            cout << static_cast<char> (i+65);
    	        }
    	    }
    	}
    	if (odd!=INT_MAX) {
    	    while(a[odd]--) {
    	        cout << static_cast<char> (odd+65);
    	    }
    	}
        for(int i=25; i>=0; --i) {
    	    if (a[i]%2==0) {
    	        for(int j=0; j<a[i]/2; j++) {
    	            cout << static_cast<char> (i+65);
    	        }
    	    }
    	}
	}
}
