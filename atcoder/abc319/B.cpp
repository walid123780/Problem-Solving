#include <bits/stdc++.h>
using namespace std;

#define ll long long
int gcd(long long a, long long b){
    if(a == 0) return b;
    return gcd(b%a, a);
}
void solve() {
	int n;
	cin >> n;

	std::vector<long long> v;
	v.push_back(1);
	for(int j = 1; j <= 9; j++) {
		if(n % j == 0 ) {
			v.push_back(j);
		}
	}
	sort(v.begin(), v.end());

	for(int i = 0; i <= n; i++) {
		bool ok = false;
		for(auto it : v) {
			long long f = (it * 1LL * i);
			if(gcd(n , f) == n) {
				cout << it;
				ok = true;
				break;
			}
		}
		if(!ok) cout << "-";
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
}