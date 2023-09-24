#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    std::vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i].first >> v[i].second;
    }
    int x = v[0].first;
    int y = v[0].second;
    for(int i = 1; i < n; i++) {
    	if(v[i].first >= x and v[i].second >= y) {
    		cout << -1 << endl;
    		return;
    	}
    }
    cout << x << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}