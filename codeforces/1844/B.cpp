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
		if(n % 2 == 1) {
			for(int i = 3; i <= n; i += 2) {
				cout << i << " ";
			}
			cout << 1 << " ";
			for(int i = n - 1; i >= 2; i -= 2) {
				cout << i << " ";
			}
		}
		else if(n % 2 == 0) {
			for(int i = 3; i <= n; i += 2) {
				cout << i << " ";
			}
			cout << 1 << " ";
			for(int i = n; i >= 2; i -= 2) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}