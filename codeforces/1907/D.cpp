#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		std::vector<pair<int, int>> v(n);

		for(int i = 0; i < n; i++) {
			cin >> v[i].first >> v[i].second;
		}
		int l = 0, r = inf, ans;
		while(l <= r) {
			int mid = (l + r) / 2;
			bool possiable = true; int left = 0, right = 0;
			for(int i = 0; i < n; i++) {
				left -= mid;
				right += mid;
				if(right < v[i].first || left > v[i].second) {
					possiable = false;
					break;
				}
				left = max (left, v[i].first);
				right = min(right, v[i].second);
			}
			if(possiable) {
				ans = mid;
				r = mid - 1;
			}
			else l = mid + 1;
		}
		cout << ans << endl;
	}
	return 0;
}