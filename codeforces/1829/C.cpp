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
		std::vector<pair<ll , string>> v;
		for(int i = 0; i < n; i++) {
			int x; cin >> x;
			string s; cin >> s;
			v.push_back({x, s});
		}
		sort(v.begin(), v.end());
		ll oka = 0 , okb = 0 , ans = 0;
		for(int i = 0; i < n ; i++) {
			string t = v[i].second;
			if(t == "00") continue;
			else if(t == "11") {
				if(ans == 0 && (!oka && !okb)) ans = v[i].first;
				else if(oka && okb) ans = min(ans , v[i].first);
				else ans = v[i].first;
				oka = 1; okb = 1;
				break;
			}
			else if(!oka && t == "10")  {
				ans += v[i].first; oka = 1;
			}
			else if(!okb && t == "01") {
				ans += v[i].first; okb = 1;
			}
		}
		if(oka && okb) cout << ans << endl;
		else cout << -1 << endl;
	}
	return 0;
}