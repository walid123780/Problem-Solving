#include <bits/stdc++.h>
using namespace std;

int logg(int x) {
	int cnt = -1;
	while(x){
		x /= 2;
		cnt++;
	}
	return cnt;
}
void solve() {
	int n , k;
	cin >> n >> k;
	int mp[30] = {};
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		mp[logg(x)]++;
	}
	int ans = 0;
	for(int i = 0; ; i++) {
		int g = k;
		for(int j = 25; j >= 0; j--) {
			int power = 1 << j;
			while(g >= power and mp[j] > 0) {
				g = g - power;
				mp[j]--;
			}
		}
		ans += 1;
		int complete = 1;
		for(int k = 0; k < 26; k++) {
			if(mp[k]) complete = 0;
		}
		if(complete) break;
	}
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc = 1;
	cin >> tc;
	while (tc--) {
		solve();
	}
	return 0;
}