#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long>apples;
long long total_sum=0;
long long min_diff;

void solve(int index, long long current_sum) {
    if (index==n) {
        long long other_sum = total_sum-current_sum;
        min_diff = min(min_diff, abs(other_sum-current_sum));
        return;
    }
    solve(index+1, current_sum+apples[index]);
    solve(index+1, current_sum);
}

int main() {
    cin >> n;
    apples.resize(n);
    for(int i=0; i<n; ++i) {
        cin >> apples[i];
        total_sum+=apples[i];
    }
    min_diff=total_sum;
    solve(0,0);
    cout << min_diff << endl;
}