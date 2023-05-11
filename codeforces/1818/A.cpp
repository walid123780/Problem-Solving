#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n , m; 
		cin >> n >> m;
		string s; cin >> s;
		int ans = 1;
		for (int i = 1 ; i < n; i++) {
			string t;
			cin >> t;
			if(s == t) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}