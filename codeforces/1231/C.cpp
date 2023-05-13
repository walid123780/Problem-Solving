#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e9;
const int MIN = -MAX;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	while(t--) {
		int n , m;
		cin >> n >> m;
		int v[n + 1][m + 1];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> v[i][j];
			}	
		}
		for(int i = n - 1; i >= 0; i--) {
			for(int j = m - 1; j >= 0; j--) {
				if(v[i][j] != 0) continue;
				int down = (v[i + 1][j] == 0 ? MAX : v[i + 1][j]);
				int right = (v[i][j + 1] == 0 ? MAX : v[i][j + 1]);
				int mx = min (right , down) - 1;
				v[i][j] = mx;
				
			}	
		}
		ll sum = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 1; j < m; j++) {
				if(v[i][j] <= v[i][j - 1]) {
					cout << -1  << endl;
					return 0;
				} 
			}
		}
		for(int i = 0; i < m; i++) { 
			for(int j = 1; j < n; j++) {
				if(v[j][i] <= v[j - 1][i]) { 
					cout << -1 << endl;
					return 0;
				} 
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				sum += v[i][j];
			}
		}
		cout << sum << endl;
	}
	return 0;
}