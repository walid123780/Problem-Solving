#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v[i] = abs(x);	
	}
	sort(v.begin(), v.end());
	cout << v[0] << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();

}