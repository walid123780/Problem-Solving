#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];	
	}
	int alice = 0, bob = 0, alice_last = 0, bob_last = 0;
	int l = 0, r = n - 1, moves = 0 , k = 1;
	while(l <= r) {
		if(k) {
			alice_last = 0;
			while(alice_last <= bob_last and l <= r) {
				alice_last += v[l];
				l++;
			}
			alice += alice_last;
		}
		else {
			bob_last = 0;
			while(bob_last <= alice_last and l <= r) {
				bob_last += v[r];
				r--;
			}
			bob += bob_last;
		}
		moves += 1; k ^= 1;
		 
	}
	cout << moves << " " << alice << " " << bob  << "\n";
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