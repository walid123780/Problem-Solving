#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n , m;
	cin >> n >> m;
	int mx = INT_MIN;
	for(int i = 0; i < n; i++) {
		int mn = INT_MAX;
		for(int j = 0; j < m; j++) {
			int x;
			cin >> x;
			mn = min (mn, x);
		}
		mx = max(mx , mn);	
	}
	cout << mx << endl;
	return 0;
}