#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int spf[N];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 2; i < N; i++) {
		spf[i] = i;
	}
	for (int i = 2; i < N; i++) {
		for (int j = i; j < N; j += i) {
			spf[j] = min(spf[j], i);
		}
	}
	map<int,int> mp;
	int q; cin >> q;
	int ans = 1;
	while (q--) {
		int n; cin >> n;
		map<int , int>  ok; 
		while (n > 1) {
			if(!ok[spf[n]]){
				mp[spf[n]]++;
				ans = max(ans , mp[spf[n]]);
			}
			ok[spf[n]]++;
			n /= spf[n];
		}
	}
	cout << ans << endl;
	return 0;
}
