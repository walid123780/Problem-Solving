#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e9 + 69;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int arrays;
		cin >> arrays;
		std::vector<pair<int , int >> bst;
		int mn = INT_MAX;
		while(arrays --) {
			int n;
			cin >> n;
			std::vector<int> v(n);
			for(int i = 0; i < n; i++) {
				cin >> v[i];
				mn = min(mn , v[i]);
			}
			sort(v.begin(), v.end());
			bst.push_back({v[1], v[0]});
		}
		sort(bst.begin(), bst.end() , greater<pair<int , int >>());
		long long ans = 0;
		for(int i = 0; i < bst.size() - 1; i++) {
			ans += bst[i].first;
		}
		ans += mn;
		cout << ans << endl;
	}
	return 0;
}