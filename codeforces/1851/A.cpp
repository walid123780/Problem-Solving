#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n, m, k, h;
		cin >> n >> m >> k >> h;
		std::vector<int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];	
		}
		int cnt = 0;
		for(int i = 0; i < n; i++) {
			int diff = abs(h - v[i]);
			for(int j = 1; j <= m; j++) {
				ll vlad = (j * k);
				for(int p = 1; p <= m; p++) {
					if(j == p) continue;
					ll others = (k * p);
					if(abs(others -  vlad) == diff){
						cnt++;
						break;
					} 
				}
				break;
			}	
		}
		cout << cnt << endl;
	}
	return 0;
}