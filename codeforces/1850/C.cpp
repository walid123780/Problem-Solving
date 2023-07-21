#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n  = 8, m = 8;
		string ans = "";
		for(int i = 0; i < n; i++) {
			string s;
			cin >> s;
			for(int j = 0; j < m; j++) {
				if(s[j] != '.') ans += s[j];
			}	
		}
		cout << ans << endl;
	}
	return 0;
}