#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n , m;
	cin >> n >> m;
	int dp[n + 1][m + 1];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> dp[i][j];
		}
	}
	ll ans = 0;
	for(int i = 0; i < n; i++) {
		int cnt = 0;
		for(int j = 0; j < m; j++) {
			cnt += dp[i][j];
		}
		ans += (1LL << cnt) - 1;
		ans += (1LL << (m - cnt)) - 1;
	}
	for(int j = 0; j < m; j++) {
		int cnt = 0;
		for(int i = 0; i < n; i++) {
			cnt += dp[i][j];
		}
		ans += (1LL << cnt) - 1;
		ans += (1LL << (n - cnt)) - 1;
	}
	cout << ans - (n * m)<< endl;
	return 0;
}