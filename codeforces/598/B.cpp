#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s , ans = "";
	cin >> s;
	ans = s;
	ll q;
	cin >> q;
	while(q--) {
		ll l , r , k;
		cin >> l >> r >> k;
		l--; r--;
		ll mod = r - l + 1;
		k %= mod;
		for(ll i = l; i <= r; i++) {
			int f = i + k;
			if(f > r) {
				f -= mod;
			}
			ans[f] = s[i];
		}
		s = ans;
	}
	cout << ans << endl;
	return 0;
}