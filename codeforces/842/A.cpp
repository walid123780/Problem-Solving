#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll l, r, x, y, k;
	cin >> l >> r >> x >> y >> k;
	ll lo = x , hi = y, ans = 0;
	while(lo <= hi) {
		ll mid = (lo + hi) >> 1;
		if((mid * k) >= l) {
			ans = mid;
			hi = mid - 1;
		} 
		else lo = mid + 1;
	}
	if((ans * k) >= l && (ans * k) <= r) {
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;

	return 0;
}