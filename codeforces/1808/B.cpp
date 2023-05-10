#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		ll n , m;
		cin >> n >> m;
		vector<vector<int>> v(m + 1);
		for(int i = 1; i <= n; i++) {
			for(int j = 1 ; j <= m ; j++) {
				int x; cin >> x;
				v[j].push_back(x);
			}	
		}
		ll ans = 0;
		for(int j = 1; j <= m; j++) {
			sort(v[j].begin(), v[j].end());
			ll sum = 0;
			for(int i = 0 ; i < n ; i++) {
				ans += 1LL * v[j][i] * i - sum;
				sum += v[j][i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}