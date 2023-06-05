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

		int f = 1;
		int v[n][m];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				v[i][j] = f;
				f++;
			}	
		}
		for(int i = 1; i < n; i+=2) {
			for(int j = 0; j < m; j++) {
				cout << v[i][j] << ' ';
			}
			cout << endl;
		}
		for(int i = 0; i < n; i+=2) {
			for(int j = 0; j < m; j++) {
				cout << v[i][j] << ' ';
			}	
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}