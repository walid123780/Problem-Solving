#include <bits/stdc++.h>
using namespace std;


void solve() {

	long long n, k, x;
	cin >> n >> k >> x;

	long long f = (k * (k + 1)) / 2;
	long long p = (k * n) - (k * (k - 1)) / 2;
	

	if(f > x or p < x) {
		cout << "NO\n";
	}

	else cout <<  "YES\n";
	
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