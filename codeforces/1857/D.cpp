#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		std::vector<int> a(n) , c(n);
		for(int i = 0; i < n; i++) {
			cin >> a[i];	
		}
		for(int i = 0; i < n; i++) {
			int x; cin >> x;
			c[i] = (a[i] - x);
		}
		std::vector<int> s = c;
		sort(s.begin(), s.end());
		int ans = 0;
		vector<int> v;
		for(int i = 0; i < n; i++) {
			int index = upper_bound(s.begin(), s.end() , c[i]) - s.begin();	
			if(index == n) {
				ans += 1;
				v.push_back(i + 1);
			}
		}
		cout << ans << endl;
		for(auto it : v) {
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}	