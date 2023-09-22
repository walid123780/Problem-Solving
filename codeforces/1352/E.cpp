#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	std::vector<int> v(n);
	int freq[n + 1] = {0};
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		freq[v[i]] += 1;
	}
	int ans = 0;
	for(int l = 0; l < n; l++) {
		int sum = 0;
		for(int r = l; r < n; r++) {
			sum += v[r];
			if(l == r) continue;
			if(sum <= n) {
				ans += freq[sum];
				freq[sum] = 0;
			}
		}	
	}
	cout << ans << endl;
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