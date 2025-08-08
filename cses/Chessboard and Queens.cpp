#include <bits/stdc++.h>
using namespace std;
    
int n;
vector<vector<int>>a;
int sum=0;
vector<bool> col;
vector<bool> diag;
vector<bool> anti_diag;

bool isSafe(int r, int c) {
    if (col[c] || diag[r-c+(n-1)] || anti_diag[r+c]) {
        return 0;
    }
    return 1;
}

void solve(int r) {
    if (r==n) {
        sum++;
        return;
    }
    for(int i=0; i<n; i++) {
        if (a[r][i]!=2) {
            if (isSafe(r,i)) {
                a[r][i]=1;
                col[i]=1;
                diag[r-i+(n-1)]=1;
                anti_diag[r+i]=1;
                
                solve(r+1);
                
                a[r][i]=0;
                col[i]=0;
                diag[r-i+(n-1)]=0;
                anti_diag[r+i]=0;
            }
        }
    }
}    
    
int main() {
    n=8;
    a.resize(n, vector<int> (n,0));
    col.resize(n, 0);
    diag.resize(n, 0);
    anti_diag.resize(n, 0);
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            char x; cin >> x;
            if (x=='*') {
                a[i][j]=2;
            }
        }
    }
    
    solve(0);
    cout << sum << endl;
}