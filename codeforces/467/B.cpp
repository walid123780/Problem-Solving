#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n , m, k;
	cin >> n >> m >> k;
	std::vector<int> v(m + 1);
	for(int i = 0; i <= m; i++) {
		cin >> v[i];
	}
	int cnt = 0;
	for(int i = 0; i < m; i++) {
		int x = v[i] ^ v[m];
		if(__builtin_popcount(x) <= k) {
			cnt += 1;
		}
	}
	cout << cnt << endl;
	return 0;
}