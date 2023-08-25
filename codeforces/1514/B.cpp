#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n , m;
		cin >> n >> m;
		long long ans = 1;
		for(int i = 0; i < m; i++) {
			ans = (ans * n) % mod;
		}
		cout << ans << endl;
	}
	return 0;
}