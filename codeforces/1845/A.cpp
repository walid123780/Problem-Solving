#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n, k, x;
		cin >> n >> k >> x;
		if(x != 1) {
			cout << "YES\n" << n << endl; 
			for(int i = 0; i < n; i++) {
				cout << 1 << " ";
			}
			cout << endl;
		}
		else if(k == 2) {
			if(n % 2 == 0) {
				cout << "YES\n" << n / 2 << endl; 
				for(int i = 0; i < n / 2; i++) {
					cout << 2 << " ";
				}
				cout << endl;
			}
			else cout << "NO" << endl;
		}
		else if(k >= 3) {
			if(n % 2 == 1) {
				cout << "YES\n";
				cout << 1 + ((n - 3) / 2) << endl;
				for(int i = 0; i < ((n - 3) / 2); i++) {
					cout << 2 << " ";
				}
				cout << 3 << endl;
			}
			else if(n % 2 == 0) {
				cout << "YES\n" << n / 2 << endl; 
				for(int i = 0; i < n / 2; i++) {
					cout << 2 << " ";
				}
				cout << endl;
			}
		}
		else cout << "NO" << endl;
	}
	return 0;
}