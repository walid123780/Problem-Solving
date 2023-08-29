#include <bits/stdc++.h>
using namespace std; 

int bits[20][200001];

void solve() {
	int l, r;
	cin >> l >> r;
	int ans = 0;
	for(int i = 0; i < 20; i++) {
		ans = max(ans , bits[i][r] - bits[i][l - 1]);
	}
	cout << (r - l + 1) - ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	for(int c = 0; c < 20; c++) {
		for(int i = 1; i <= 200000; i++) {
			bits[c][i] = bits[c][i - 1] + (i >> c & 1);
		}
	}
	int tc;
	cin >> tc;
	while (tc--) {
		solve();
	}
}