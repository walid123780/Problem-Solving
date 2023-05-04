#include<bits/stdc++.h>
using namespace std;

const int MAX = INT_MAX;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n , m , d;
		cin >> n >> m >> d;
		std::vector<int> v(n + 1) , pos(m);
		for(int i = 1; i <= n; i++) {
			int f; cin >> f;
			v[f] = i;
		}
		for(int i = 0; i < m; i++) {
			cin >> pos[i];
		}
		int mn = MAX;
		for(int i = 1; i < m; i++) {
			int a = v[pos[i - 1]] , b = v[pos[i]] , c = a + d;
			if(a < b && a + d >= b) {
				mn = min (mn , (b - a));
				int x = c - b + 1;
				int y = (a - 1) + (n - b);
				if(x <= y) {
					mn = min(mn , x);
				}
			}
			else {
				mn = 0;       
			}
		}
		if(mn ==  MAX) cout << 0 << endl;
		else  cout << mn << endl;
	}
	return 0;
}