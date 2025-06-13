#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int h[N];
int dp[N];
int k;
int func(int i) {
    if(i==0) return 0;
    int cost = INT_MAX;
    if (dp[i] != -1) return dp[i];
    cost = min(cost, func(i-1) + abs(h[i]-h[i-1]));
    int temp=2;
    while(temp<=k) {
        if (i>1)
        cost = min(cost, func(i-temp) + abs(h[i]-h[i-temp]));
        temp++;
    }
    return dp[i]=cost;
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n; cin >> n >> k;
    for(int i=0; i<n; ++i) {
        cin >> h[i];
    }
    cout << func(n-1);
    
}