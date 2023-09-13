#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int l = 0, r = n - 1;
	int palindrome = 0, not_palindrome = 0;
	while(l < r) {
		if(s[l] != s[r]) {
			not_palindrome += 1;
		}
		else palindrome += 1;
		l++ , r--;
	}
	std::vector<int> ans(n + 1);
	int limit = not_palindrome + (palindrome * 2);
	for(int i = not_palindrome; i <= limit; i += 2) {
		ans[i] = 1;
		if(n % 2) ans[i + 1] = 1;
	}
	for(auto it : ans) {
		cout << it;
	}
	cout << "\n";
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