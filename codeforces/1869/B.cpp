#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll inf = 1e18;

ll func (pair<ll, ll> x, pair<ll, ll> y) {
	return abs(x.first - y.first) +
		   abs(x.second - y.second);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long n, k, a, b;
		cin >> n >> k >> a >> b;
		std::vector<pair<long long , long long>> v(n + 69);
		for(int i = 1; i <= n; i++) {
			cin >> v[i].first >> v[i].second;
		}
		ll ans = func(v[a], v[b]);
		ll da = inf , db = inf;
		for(int i = 1; i <= k; i++) {
			da = min(da, func(v[a] , v[i]));
		}
		for(int i = 1; i <= k; i++) {
			db = min(db, func(v[b] , v[i]));
		}
		cout << min(ans , da + db) << "\n";
	}
}