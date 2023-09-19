#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 69;
void solve() {
	int n;   
	cin >> n;
	string a, b, c;
	cin >> a >> b >> c;
	int ans = inf;
	int N = 3 * n;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if(i != j  and i != k and j != k and (a[i % n] == b[j % n]) and (b[j % n] == c[k % n]) and  (a[i % n] == c[k % n])) {
					ans = min(ans , max({i , j , k}));
				}
			}
		}
	}
	if(ans == inf) ans = -1;
	cout << ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
}