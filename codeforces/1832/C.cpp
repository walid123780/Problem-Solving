#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		std::vector<int> v(n);
		set<int> s;
		for(int i = 0; i < n; i++) {
			cin >> v[i];
		}
		n = std::unique(v.begin(), v.end()) - v.begin();
		int ans = 0;
		for(int i = 0; i < n; i++) {
			if(i == 0 || i ==  n - 1) ans++;
			else if(v[i] < v[i - 1] &&  v[i] < v[i + 1]) ans ++;
			else if(v[i] > v[i - 1] && v[i] > v[i + 1]) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}