#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	int t = 1;
	cin >> t;
	for(int cz = 1; cz <= t; cz++) {
		int n , m , mn;
		cin >> n >> m;
		std::vector<int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int l = 0 , r = n , ans = INT_MAX;
		while(l <= r) {
			int mid = (l + r) / 2;
			int mx = 0;  
			int cnt = 0;
			for(int i = 1; i < n; i++) {
				if(v[i] - v[i - 1] <= m) {
					cnt++;
				}
				else {
					mx = max(mx , cnt);
					cnt = 0;
				}
			}
			mx = max(cnt , mx);
			if(mx <= mid) {
				r = mid - 1;
				ans = mid;
			}
			else l = mid + 1;
		}
		cout << n - (ans + 1) << endl;
	}
	return 0;
}