#include <bits/stdc++.h>
using namespace std;

bool Anonymous_Informant (std::vector<int> &v, int k, int n) {
	int start = 0;
	for(int i = 0; i < k; i++) {
		int end = (start + n - 1) % n;
		int val = v[end];
		if(val > n) {
			return false;
		}
		start = (start - val + n) % n;
	}
	return true;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		std::vector<int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];
		}
		int sz = min(n, k);
		if(Anonymous_Informant(v, sz, n)) {
			cout << "YES\n";
		}
		else cout << "NO\n";
	} 
	return 0;
}