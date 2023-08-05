#include<bits/stdc++.h>
using namespace std;

const long long LIMIT = 2e14;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	long long ans = LIMIT;
	for(int c = 1; c <= 1e5; c++) {
		long long pw = 1 , operation = 0; bool not_ok = false;
		for(int i = 0; i < n; i++) {
			if(pw >= LIMIT) {
				not_ok = true;
				break;
			}
			operation += abs(pw - v[i]);
			pw *= c;
		}
		if(!not_ok) {
			ans = min (ans , operation);
		}
		else break;
	}
	cout << ans << endl;
	return 0;
}