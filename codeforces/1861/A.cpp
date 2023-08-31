#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
bool f[N];

vector<int> primes;
void seive() {
	int n = N - 9;
	f[1] = true;
	for (int i = 2; i * i <= n; i++)
	{
		if (!f[i]) {
			for (int j = i * i; j <= n; j += i)
				f[j] = true;
		}
	}
	for (int i = 2; i <= n; i++) {
		if(!f[i]) primes.push_back(i);
	} 
}
void solve() {
	string s , t;
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		if((s[i] - '0') % 2 != 0) {
			t += s[i];
		}
	}
	for(int i = 2; i <= t.size(); i++) {
		std::string bitmask(i, 1); 
		bitmask.resize(5, 0); 
		do {
			string g = "";
			for (int i = 0; i < 5; ++i) {
				if (bitmask[i]) {
					g += t[i];
				}
			}
			int num = stoi(g);
			if(!f[num]) {
				cout << num << endl;
				return;
			}
		} while (std::prev_permutation(bitmask.begin(), bitmask.end()));
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	seive();
	int tc;
	cin >> tc;
	while (tc--) {
		solve();
	}
}