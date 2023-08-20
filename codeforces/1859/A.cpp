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
		std::vector<int> v(n);
		int mxcnt = 0;
		for(int i = 0; i < n; i++) {
			cin >> v[i];	
		}
		sort(v.begin(), v.end());
		for(int i = n - 1 ; i >= 0; i--) {
			if (v[n - 1] == v[i]) {
				mxcnt += 1;
			}
			else break;
		}
		if(mxcnt == n) {
			cout << -1 << endl;
		}
		else {
			cout << n - mxcnt << " " << mxcnt << endl;  
			for(int i = 0; i < n; i++) {
				if(i == n - mxcnt) {
					cout << endl;
				}
				cout << v[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}