#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    if(k == 1) {
        cout << 1 << endl;
    }
    else if(k == 2) {
        int x = m / n;
        cout << x + min((n - 1), m) << endl;
    }
    else if(k == 3) {
        int f = max(m - n , 0);
        int x = f / n;
        cout << f - x << endl;
    }
    else cout << 0 << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}