#include<bits/stdc++.h>
using namespace std;

#define ll long long
struct myComp {
	bool operator()(const pair<ll, ll> a, const pair<ll, ll> b) {
		if (a.first == b.first) return a.second < b.second;
		else return a.first > b.first;
	}
};
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		ll n , m , h;
		cin >> n >> m >> h;
		std::vector<pair<ll , ll>> ans;
		ll r_s = 0, r_p = 0;
		for(int i = 0; i < n; i++) {
			std::vector<int> v(m);
			for(int j = 0; j < m; j++) {
				cin >> v[j];
			}
			sort(v.begin(), v.end());
			ll x = h , penalty = 0 , solved = 0 , sum = 0;
			for(int k = 0; (x - v[k]) >= 0 and k < m ; k++) {
				x -= v[k];
				sum += v[k];
				penalty += sum; 
				solved += 1;
			}
			if(i == 0) r_s = solved ,r_p = penalty;
			ans.push_back({solved, penalty});
		}
		sort(ans.begin(), ans.end() , myComp());
		for(int i = 0; i < n; i++) {
			if(r_s == ans[i].first && r_p == ans[i].second) {
				cout << i + 1 << endl;
				break;
			} 
		}
	}
	return 0;
}