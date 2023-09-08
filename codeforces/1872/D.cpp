#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
	return (a / __gcd(a, b)) * b;
}
long long func(long long n) {
	return n * (n + 1) / 2;
}
void solve() {
	long long n, a, b;
	cin >> n >> a >> b;

	long long cm = lcm(a , b); 
	int add = n / a - n / cm;
	int del = n / b - n / cm;

	long long ans = func(n) - func(n - add) - func(del);
	cout << ans << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc;
	cin >> tc;
	while (tc--) {
		solve();
	}
}