#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int n = s.size();
	bool ok = true;
	std::vector<int> v; //1 means sorted, -1 means not sorted, 0 means janina
	for (auto ch : s) {
		if(ch == '+') {
			if(v.size() and v.back() == -1) v.push_back(-1);
			else v.push_back(0);
		}
		else if(ch == '-') {
			int u = v.back();
			v.pop_back();
			if(u == 1 and v.size()) v.back() = 1;
		}
		else {
			if(ch == '1') {
				if(v.size() < 2) continue;
				if(v.back() == -1) ok = false;
				else v.back() = 1;
			}
			else {
				if(v.size() < 2) {
					ok = false;
					continue;
				}
				if(v.back() == 1) ok = false;
				else v.back() = -1;
			}
		}
	}
	if(ok) cout << "YES\n"; 
	else cout << "NO\n";
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