#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n = s.size();
		string t = s;
		reverse(s.begin(), s.end());
		if(s == t) {
			int cnt = 1;
			for(int i = 1; i < n; i++) {
				if(s[i] == s[i-1]) cnt++;
			}
			if(cnt == n) cout << -1 << endl;
			else cout << n - 1 << endl;
		}
		else cout << n << endl;
	}
	return 0;
}