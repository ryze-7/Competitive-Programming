using namespace std;

#define ll long long
#define SORT(a) sort(a.begin(),a.end())

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a1(n);
    vector<int> a2(m);
    
    for(int i=0; i<n; ++i) {
        cin >> a1[i];
    }
    for(int i=0; i<m; ++i) {
        cin >> a2[i];
    }
    
    SORT(a1);
    SORT(a2);
    
    int i=0, j=0, ans=0;
    while(i<n && j<m) {
        if (abs(a1[i]-a2[j]) > k) {
            if (a1[i] > a2[j]) {
                j++;
            }
            else {
                i++;
            }
        }
        else {
            ans++;
            i++;
            j++;
        }
    }
    cout << ans;
}

