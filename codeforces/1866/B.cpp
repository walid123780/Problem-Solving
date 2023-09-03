#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 69 , M = 2e6 + 9 , mod = 998244353;
int a[N] , b[N] , p[M] , q[M];

void solve() {
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++) {
		cin >> b[i];
		p[a[i]] = b[i];
	}
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++) {
		cin >> b[i];
		q[a[i]] = b[i];
	}
	int ans = 1;
	for(int i = 0; i < M; i++) {
		if(p[i] > q[i]) {
			ans = ans * 2 % mod;
		}
		if(p[i] < q[i]) {
			ans = 0;
		}
	}
	cout << ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
}