#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int x , y, n;
		cin >> x >> y >> n;
		int i , cnt;
		std::vector<int> ans;
		ans.push_back(y);
		for(i = y - 1, cnt = 1; i > x and cnt < n - 1; cnt += 1 , i -= cnt) {
			ans.push_back(i);
		}

		if(i < x) {
			cout << -1 << endl;
		}
		else {
			ans.push_back(x);
			reverse(ans.begin(), ans.end());
			if(ans.size() == n) {
				for(int i = 0; i < n; i++) {
					cout << ans[i] << " ";
				}
				cout << endl;
			}
			else cout << -1 << endl;

		}
	}
	return 0;
}