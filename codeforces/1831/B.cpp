#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		std::vector<ll> v , a;
		map< ll , ll > mp, mp1;
		for(int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.push_back(x);	
			mp[x] = 1;
		}
		for(int i = 0; i < n; i++) {
			ll y;
			cin >> y;
			a.push_back(y);
			mp1[y] = 1;
		}
		ll cnt = 1;
		for(int i = 1; i < n; i++) {
			if(v[i] == v[i-1]) {
				cnt++;
				mp[v[i]] = max(mp[v[i]] , cnt);
			}
			else {
				cnt = 1;
			}
		}
		cnt = 1 ;
		for(int i = 1; i < n; i++) {
			if(a[i] == a[i-1]) {
				cnt++;
				mp1[a[i]] = max(mp1[a[i]] , cnt);	
			}
			else {
				cnt = 1;
			}
		}
		ll ans = 0;
		for(int i = 0; i < n; i++) {
			ll f = mp[a[i]] + mp1[a[i]];
			ans = max(f , ans);
		}
		for(int i = 0; i < n; i++) {
			ll f = mp[v[i]] + mp1[v[i]];
			ans = max(f , ans);
		}
		cout << ans << endl;
	}
	return 0;
}