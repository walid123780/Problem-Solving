#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, here, q;
	cin >> n >> here >> q;
	string s;
	cin >> s;
	if(here == n) {
		cout << "YES\n";
		return;
	}
	int online = here, offine = 0 , ok = here;
	for(int i = 0; i < q; i++) {
		if(s[i] == '+') {
			ok += 1;
			if(offine) offine -= 1;
			else online += 1;
		}
		else if(s[i] == '-') {
			offine += 1;
		}
	}
	if(online < n and ok >= n) {
		cout << "MAYBE\n";
		return; 
	}
	if(ok >= n) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
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