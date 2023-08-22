#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		map<int , int> mp;
		set<int > s;
		int mx = INT_MIN , sz = (n * (n -1)) >> 1;
		for(int i = 0; i < sz; i++) {
			int x;
			cin >> x;
			mp[x]++;
			s.insert(x);
			mx = max(mx , x);
		}
		vector<int> ans(n + 1);
		int j = 1 , p = 1;
		for(auto it : s) {
			int x = n - j;
			while(mp[it] >= x and j <= n) {
				ans[p++] = it;
				j += 1;
				x += (n - j);
			}
		}
		for(int i = 1; i <= n; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}