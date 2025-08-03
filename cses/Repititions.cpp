//#include "cp.h"
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string str; cin >> str;
    int len=1, ans=1;
    char temp=str[0];
    for (int i=1; i<str.length(); i++) {
        if (str[i]==temp) {
            len++;
            ans = max(ans,len);
        }
        else {
            len=1;
            temp=str[i];
        }
    }
    cout << ans;
}
